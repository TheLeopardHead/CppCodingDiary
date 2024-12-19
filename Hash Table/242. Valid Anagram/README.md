[力扣题目链接](https://leetcode.cn/problems/valid-anagram/)

给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。

示例 1:
输入: s = "anagram", t = "nagaram"
输出: true

示例 2:
输入: s = "rat", t = "car"
输出: false

## 解题思路

使用哈希表来存储字符串 s 和 t 中每个字符出现的次数，然后比较两个哈希表是否相等。

