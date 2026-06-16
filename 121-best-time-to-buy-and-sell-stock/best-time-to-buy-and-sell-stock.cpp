class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n = prices.size();
        int min_price =prices[0];
        int max_profit = 0;
        if(prices.empty()){
            return 0;
        }
       for(int i = 1; i<n; i++){
        if(prices[i]<min_price){
                min_price = prices[i];
        }
        int curr_profit = prices[i] - min_price;
        if( curr_profit > max_profit){
            max_profit = curr_profit;
        }
       }
       return max_profit;
    }
};