class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int k = prices[0],profit = 0;
        for(int i=1;i<prices.size();i++){
            if(k>prices[i]) k = prices[i];
            else profit = max(profit,prices[i]-k);
        }
        return profit;
    }
};

//KADANE's Algorithm