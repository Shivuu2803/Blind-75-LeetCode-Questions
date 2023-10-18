class Solution 
{
public:
    
      vector<int> twoSum(vector<int>& nums, int target) 
      {
                map<int,int> M;
                vector<int> vec;
                int n= nums.size();

                for(int i=0;i<n;i++)
                {
                        int diff = target - nums[i];
                        if(M.find(diff) != M.end())
                        {
                            auto p = M.find(diff);        
                            vec.push_back(p->second);
                            vec.push_back(i);
                        }
                        M.insert(make_pair(nums[i],i));
                }
          
                return vec;
}
};
