## 逻辑回归
1. 损失函数推导，损失函数求解
2. 几种梯度下降法的特点， LR与感知机、SVM的区别和联系


## 感知机和BP的联系， 为什么要用对偶形式求解，联系感知机解释线性可分



## SVM原理，对偶形式 核函数的作用和选取方式， 核函数的调参、 SMO算法的原理


## ID3、c4.5 ,CART树的特点

## GBDT 、 FR 、 boosting 、 bagging 、 stacking , GBDT和xgboost区别和联系





# 统计学习方法

## 决策树

步骤：

1. 特征选取（信息增益和信息增益比）
2. 树的构建
3、树的剪枝（防止过拟合）

- ID3、 ID4.5 、 CART算法

1. 熵的定义

H(p) = - sum(pi * log(pi))
0<= H(p)<=logn

2. 信息增益

得知特征X的信息而使得类Y的信息的不确定性减少的程度。

3. 剪枝
损失函数的最小化原则就是正则化的极大似然估计进行模型选择。

[Decision Tree](DecisionTree.md)


## logistic Regression

1. 梯度下降法




predict = sigmoid(w*x)
error = lable - predict
dw += learning * error * X.T

[logistic Regression](machineLearning\LogisticRegression.md)



## SVM

1. 为什么要使用对偶问题求解

- 对偶问题将原始问题中的约束转为了对偶问题中的等式约束
- 方便核函数的引入
- 改变了问题的复杂度。由求特征向量w转化为求比例系数a，在原始问题下，求解的复杂度与样本的维度有关，即w的维度。在对偶问题下，只与样本数量有关。

所以，如果是做线性分类，且样本维度低于样本数量的话，在原问题下求解就好了，Liblinear之类的线性SVM默认都是这样做的；但如果你是做非线性分类，那就会涉及到升维（比如使用高斯核做核函数，其实是将样本升到无穷维），升维后的样本维度往往会远大于样本数量，此时显然在对偶问题下求解会更好。

2. [SMO算法](SVM.md)



## 提升方法

提升(boosting)方法是一种常用的统计学习方法，它改变训练样本的权重，学习多个分类器，并将这些分类器线性组合，提高分类的性能。
1. 每一轮如何改变训练数据的权值或者概率分布
2. 将弱分类器组合成一个强分类器

## Adaboost算法

[Adaboost](AdaBoost.md)


## 马尔科夫链

A是个二维矩阵，`a[i] for a in A`则表示取A举证的i列。

```
                    alphas[i][t] = np.dot(
                        [alpha[t - 1] for alpha in alphas],
                        [a[i] for a in A]) * B[i][indexOfO]  # 对应P176（10.16）
```



## 概率图模型