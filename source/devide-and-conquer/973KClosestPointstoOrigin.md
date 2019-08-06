

```

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        // max heap 队列头的值最大
        // stores the points as {distance, {x, y}}
        priority_queue<pair<double, pair<int, int>>> pq;
        // iterate over the points
        for(auto ele : arr){
            int x = ele[0];
            int y = ele[1];
            // calculate distance from origin
            double dist = sqrt((x*x) + (y*y));
            // if number of points in heap is less than required
            // number, insert it directly
            if(pq.size() < k)
                pq.push({dist, {x, y}});
            else{
                // need to check if new point is near to origin
                // when compared with the farthest point from origin
                // among current k points.
                // 如果当前的值小于队列里最大的值，则替换。
                auto curr = pq.top();
                if(curr.first > dist){
                    pq.pop();
                    pq.push({dist, {x, y}});
                }
            }
            
        }
        // max heap has k points which are nearest to origin
        vector<vector<int>> ans;
        // extract points from priority queue and store them in final answer
        while(!pq.empty()){
            //队列里保存的都是最小的N的元素。
            auto ele = pq.top();
            pq.pop();
            int x = ele.second.first;
            int y = ele.second.second;
            ans.push_back(vector<int> {x, y});
        }
        return ans;
    }
};

```

## java


``` Java
class Solution {
    class Item {
        int x;
        int y;
        int dist;
        public Item(int x, int y) {
            this.x = x;
            this.y = y;
            this.dist = x*x + y*y;
        }
    }


    public int[][] kClosest(int[][] points, int K) {
        //min heap
        PriorityQueue<Item>  queue = new PriorityQueue<>((a,b) -> a.dist - b.dist);
        Map<Integer, Integer> map = new HashMap<>();
        for(int i = 0;i<points.length;i++) {
            queue.add(new Item(points[i][0], points[i][1]));
        }

        int[][] res = new int[K][2];

        for(int i = 0;i<K;i++) {
            res[i][0] = queue.peek().x;
            res[i][1] = queue.poll().y;
        }
        return res;
    }
};
```