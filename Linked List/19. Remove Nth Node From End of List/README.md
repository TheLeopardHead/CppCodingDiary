[力扣题目链接](https://leetcode.cn/problems/remove-nth-node-from-end-of-list/)

给你一个链表，删除链表的倒数第 n 个结点，并且返回链表的头结点。

进阶：你能尝试使用一趟扫描实现吗？

示例 1：


![19.删除链表的倒数第N个节点](https://code-thinking-1253855093.file.myqcloud.com/pics/20210510085957392.png)

输入：head = [1,2,3,4,5], n = 2
输出：[1,2,3,5]

示例 2：

输入：head = [1], n = 1
输出：[]

示例 3：

输入：head = [1,2], n = 1
输出：[1]


## 解题思路

双指针固定一个N的范围。另外虚拟头节点确实好用！