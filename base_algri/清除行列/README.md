# 规则

 - 所有算法都在语言允许的范围内尽力做到行数最短。算法行数尽量控制在十行左右，一般算法行数不会超过20行，个别算法行数会超过20行。


# 清除行列
 - 题目描述
 - 请编写一个算法，若N阶方阵中某个元素为0，则将其所在的行与列清零。

 - 给定一个N阶方阵int[][](C++中为vector<vector><int>>)mat和矩阵的阶数n，请返回完成操作后的int[][]方阵(C++中为vector<vector><int>>)，保证n小于等于300，矩阵中的元素为int范围内。</int></vector></int></vector>

 - 测试样例：
 - [[1,2,3],[0,1,2],[0,0,1]]
 - 返回：[[0,0,3],[0,0,0],[0,0,0]]




# 算法
 - 没有借助额外的数据结构或者内存。
 - 时间复杂度O(N2)。
 - 这个算法最短C++ 14行，python 12行