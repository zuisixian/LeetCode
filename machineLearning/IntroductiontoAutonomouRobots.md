
# introduction to autonomou robots


## chapter6 视觉
主要内容：
1. 作为二维信号的图像
2. 提供隐藏在低级信息中的丰富信息的直观理解
3. 介绍基本卷积和基于阈值的图像处理算法。

掌握：
1. 基于卷积的滤波器
    - 高斯平滑滤波
    - 边缘检测
    - 高斯差异
2. 基于阈值的操作
3. 形态操作
    - Erosion 腐蚀
    - Dilation
    - 上面两种操作也可以用于边缘检测

## chapter7 特征提取
主要内容：
1. 使用Hough-gransform来检测线、圆和其他形状
2. 使用数值方法如最小二乘法、split-and-merge、RANSAC来提取高级特征
3. 尺度不变特征

掌握：
1. 提取特征，减少冗余信息
2. 直线识别
    - 最小二乘法拟合
    - split-and-merge algorithm
    - Random Sample And Consensus
    - Houge Transform(霍夫变换)
3. Scale-Invariant Feature Transforms（尺度不变特征变换）
    - 具体算法步骤（todo:写代码测试）
4. 使用SIFT特征来进行目标识别


## chapter9 定位
主要内容：
1. 马尔科夫定位
2. 粒子滤波器
3. 扩展卡尔曼滤波

掌握：
1. 马尔科夫定位
    - 感知更新
    - 贝叶斯规则
    - 动作更新
2. 粒子滤波器
    - 感觉跟粒子群算法差不多，蚁群算法
3. 卡尔曼滤波
    - 使用高斯分布来执行动作跟新和感知更新
    - 特征图
    - 拓展卡尔曼滤波
        - 预测更新
        - 观测
        - 测量预测
        - 匹配
        - 估计

## chapter11 SLAM
主要内容：
1. 协方差概念
2. 同时估计地图中的机器人和特征的位置

掌握：

1. EFK SLAM
2. 基于图的SLAM
    - SLAM作为最大似然估计问题
    - 基于图SLAM的数值技术

## chapter12 RGB-D SLAM
主要内容：
1. 迭代最近点（ICP）算法
2. 通过RANSAC提供初始估计来改进ICP
3. 使用SIFT特征改进ICP中的点选择和闭环，以实现RGB-D建图

掌握：
1. 将距离数据转换成为点云数据
2. ICP算法
3. RGB-D建图

## update 2020/04/04

又是一年清明时，春风落日寄相思。

