class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int s = 0;
        int e = nums.size() - 1;

    while (s < e) 
    {
      int m = (s + e) / 2;
        //find mid of the given vector
      if (nums[m] < nums[e])
        e = m;
      else
        s = m + 1;
    }
    return nums[s];
    }
};
