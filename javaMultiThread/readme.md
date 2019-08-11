

## Java JUC 锁


### ReentrantLock 

1. AQS:
    - 独占锁：只有有一个线程锁占用，分为公平和非公平
    - 共享锁，例如 CountDownLatch、CyclicBarric/ ReentrantReadWriteLock.ReadLock

2. CLH队列
    - 线程队列
    - 非阻塞FIFO队列，通过自旋锁和CAS和保证节点插入和移除的原子性
3. CAS函数
    - compare and swap
    - 原子操作函数，如compareAndSetHead/compareAndSetTail()/compareAndSetNext



#### 获取锁

当调用lock()函数时，直接调用都AQS中的acuire()函数中。这里分为四个操作：
- tryAcquire():尝试获取锁
- 添加CHL队列
- 线程休眠，知道获取到锁
- 如果线程被中断，则返回true，自己给自己一个中断。selfInterrupt()
```
    public final void acquire(int arg) {
        if (!tryAcquire(arg) &&
            acquireQueued(addWaiter(Node.EXCLUSIVE), arg))
            selfInterrupt();
    }

```


1. 公平锁

公平锁在获取锁之前，需要查询`hasQueuedPredecessors`,如果没有的话，才能获取到。

```

        protected final boolean tryAcquire(int acquires) {
            final Thread current = Thread.currentThread();
            int c = getState();
            if (c == 0) {
                if (!hasQueuedPredecessors() &&
                    compareAndSetState(0, acquires)) {
                    setExclusiveOwnerThread(current);
                    return true;
                }
            }
            else if (current == getExclusiveOwnerThread()) {
                int nextc = c + acquires;
                if (nextc < 0)
                    throw new Error("Maximum lock count exceeded");
                setState(nextc);
                return true;
            }
            return false;
        }
    }

```


2、 UnFair锁

如果当前锁没有占用，即使前面有人排队，也可以直接获取到锁。

```
        final boolean nonfairTryAcquire(int acquires) {
            final Thread current = Thread.currentThread();
            int c = getState();
            if (c == 0) {
                if (compareAndSetState(0, acquires)) {
                    setExclusiveOwnerThread(current);
                    return true;
                }
            }
            else if (current == getExclusiveOwnerThread()) {
                int nextc = c + acquires;
                if (nextc < 0) // overflow
                    throw new Error("Maximum lock count exceeded");
                setState(nextc);
                return true;
            }
            return false;
        }

```
