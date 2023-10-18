class Solution 
{
public:
  int maxProfit(vector<int>& prices) 
  {
    if (prices.empty()) return 0;

    int maxProfit = 0;
    int currentProfit = 0;

    for (int i = 1; i < prices.size(); i++) 
    {
      currentProfit = max(0, currentProfit + prices[i] - prices[i - 1]);
      maxProfit = max(maxProfit, currentProfit);
    }

    return maxProfit;
  }
};
