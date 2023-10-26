class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int s = 0;
        int e = height.size() - 1;

        while (s < e) 
        {
            int lessHeight = min(height[s], height[e]);
            ans = max(ans,  lessHeight* (e - s));
            if (height[s] < height[e])
                ++s;
            else
                --e;
            }

        return ans;
        }
};
