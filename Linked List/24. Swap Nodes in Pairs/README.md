[力扣题目链接](https://leetcode.cn/problems/swap-nodes-in-pairs/)

给定一个链表，两两交换其中相邻的节点，并返回交换后的链表。

你不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。


<img src='https://code-thinking.cdn.bcebos.com/pics/24.%E4%B8%A4%E4%B8%A4%E4%BA%A4%E6%8D%A2%E9%93%BE%E8%A1%A8%E4%B8%AD%E7%9A%84%E8%8A%82%E7%82%B9-%E9%A2%98%E6%84%8F.jpg' width=600 alt='24.两两交换链表中的节点-题意'> </img></div>

## 解题思路

指针变量赋值就直接挪到哪里，如果是指针的next赋值就改变其指向。因此相对不动的是指针，next在指来指去。