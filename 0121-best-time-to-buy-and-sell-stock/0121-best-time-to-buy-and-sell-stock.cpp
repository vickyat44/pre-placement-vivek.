class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxi=0;
        for(int i=n-1;i>=0;i--){
            for(int j=i-1;j>=0;j--){
                if(prices[j]>=prices[i]){
                    break;
                }
                else{
                if((prices[i]-prices[j])>maxi){
                    maxi=prices[i]-prices[j];
                }
                }
            }
        }
        return maxi;

    }
};