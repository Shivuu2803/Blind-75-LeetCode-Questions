class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_set<char> charSet;
        int st = 0, max_length = 0;

        for (int i = 0; i < s.length(); i++) 
        {
            while (charSet.count(s[i])) 
            {
                charSet.erase(s[st]);
                st++;
            }
            charSet.insert(s[i]);
            max_length = max(max_length, i - st + 1);
        }

        return max_length;
    }
};
