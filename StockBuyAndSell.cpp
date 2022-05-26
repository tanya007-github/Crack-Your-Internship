class Solution {
public:
    int maxProfit(vector<int>& prices){
        int buy=INT_MAX;
        int profit=0;
        int maxprofit=INT_MIN;
        for(int i=0;i<prices.size();i++){
            buy=min(buy, prices[i]);
            profit=prices[i]-buy;
            maxprofit=max(maxprofit, profit);
        }
        return maxprofit;
    }
};
