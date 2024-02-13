class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int profit = 0;

        while(right < prices.size())
        {
            /*if(prices[right] - prices[left] > profit){profit = prices[right] - prices[left];}*/
            
            if(prices[right] > prices[left])
            {
                if(prices[right] - prices[left] > profit)
                    {profit = prices[right] - prices[left];}
            }
            else
            {
                left = right;
            }
            right += 1;
        }

        return profit;
    }
};
