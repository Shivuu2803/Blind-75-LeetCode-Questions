class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        
        if (n < 3) {
            return result;
        }
        
        sort(nums.begin(), nums.end());

        for (int i = 0; i + 2 < nums.size(); ++i) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int s = i + 1;
            int e = nums.size() - 1;
            while (s < e) {
                int sum = nums[i] + nums[s] + nums[e];
                if (sum == 0) {
                    result.push_back({nums[i], nums[s++], nums[e--]});

                    while (s < e && nums[s] == nums[s - 1])
                        ++s;
                    while (s < e && nums[e] == nums[e + 1])
                        --e;
                } 
                else if (sum < 0) {
                    ++s;
                } 
                else {
                    --e;
                }
            }
        }

        return result;
    }
};
