class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int N = s.size();
        int maxCount = 0;
        int left = 0;  
        int ans = 0;

        vector<int> count(26, 0);

        for (int right = 0; right < N; right++) 
        {
            count[s[right] - 'A']++;
            maxCount = max(maxCount, count[s[right] - 'A']);

            if (right - left + 1 - maxCount > k) 
            {
                count[s[left] - 'A']--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};
