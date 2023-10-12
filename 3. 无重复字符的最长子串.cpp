class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> dic;
        int i = -1, res = 0, len = s.size();
        for (int j = 0; j < len; j ++) {

            // 哈希表 dic 统计： 指针 j 遍历字符 s ，哈希表统计字符 s[j] 最后一次出现的索引 。
            if (dic.find(s[j]) != dic.end()) {
                i = max(i,dic.find(s[j]) -> second);
            }
            dic[s[j]] = j; // 哈希表记录
            res = max(res, j - i); // 更新结果
        }
        return res;
        //时间复杂度 O(N) ： 其中 N 为字符串长度.
        //空间复杂度 O(1) ： 字符的 ASCII 码范围为 000 ~ 127 ，哈希表 dic 最多使用 O(128)=O(1)大小的额外空间。

    }
};
