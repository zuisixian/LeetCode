
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

