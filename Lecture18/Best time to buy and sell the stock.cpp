class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0; 
        int n = prices.size();
        int mini = prices[0];

        for(int i=1;i<n;i++){
           
            int cost = prices[i]-mini;
            profit = max(profit,cost);// 0,4
            mini = min(mini,prices[i]);// 1 1
        }
        // mini update
        // sell stock  mini pe purchase
        return profit;
    }
};
