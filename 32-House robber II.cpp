class Solution 
{
  public:
    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return nums[0];
        }

        auto robHouse = [&](int l, int r) 
        {
        int prev1 = 0; 
        int prev2 = 0;

        for (int i = l; i <= r; i++) 
        {
            const int dp = max(prev1, prev2 + nums[i]);
            prev2 = prev1;
            prev1 = dp;
        }

        return prev1;
        };

        return max(robHouse(0, nums.size() - 2), robHouse(1, nums.size() - 1));
    }
};
