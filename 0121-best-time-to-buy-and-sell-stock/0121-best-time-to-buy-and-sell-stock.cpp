class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=1,mprofit=0;
        while(i<j && j<prices.size()){
            if(prices[i]>prices[j]){
                i=j;
                j=i+1;
            }
            else{
                int diff=prices[j]-prices[i];
                mprofit=max(diff,mprofit);
                j++;
            }

        }
        return mprofit;
    }
};