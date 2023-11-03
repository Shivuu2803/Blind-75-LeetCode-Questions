class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {
        int ans = nums.size();
        for (int i = 0; i < nums.size(); i++) 
        {
            //xor ans with nums[i] and then the result will get xor by i
            ans ^= nums[i] ^ i;
        }
        return ans;
    }
};
