[力扣题目链接](https://leetcode.cn/problems/find-common-characters/)

给你一个字符串数组 words ，请你找出所有在 words 的每个字符串中都出现的共用字符（ 包括重复字符），并以数组形式返回。你可以按 任意顺序 返回答案。

示例 1：

输入：words = ["bella","label","roller"]
输出：["e","l","l"]

示例 2：

输入：words = ["cool","lock","cook"]
输出：["c","o"]

提示：

1 <= words.length <= 100
1 <= words[i].length <= 100
words[i] 由小写英文字母组成

## 解题思路

主要注意一下std::unordered_map等哈希结构的用法。