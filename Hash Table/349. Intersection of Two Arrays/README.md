[力扣题目链接](https://leetcode.cn/problems/intersection-of-two-arrays/)

题意：给定两个数组，编写一个函数来计算它们的交集。

![349. 两个数组的交集](https://code-thinking-1253855093.file.myqcloud.com/pics/20200818193523911.png)

**说明：**
输出结果中的每个元素一定是唯一的。
我们可以不考虑输出结果的顺序。

## 解题思路

在用for循环操作迭代器的时候，要注意不能把这个迭代器删了，否则for循环无法进行++it的操作。