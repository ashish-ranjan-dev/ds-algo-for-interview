// When you are allowed to make atmost k transitions
/* Generalization of stock_buy_sell2 problem where k = 2*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        if(n<2 || k<1)return 0;
        
        // if k=1, the problem is same as first one
        if(k==1){
            int minp = prices[0];
            int maxp = INT_MIN;
            for(int i=1;i<n;i++){
                maxp = max(maxp , prices[i]-minp);
                minp = min(minp, prices[i]);
            }
            if(maxp<0)return 0;
            return maxp;
        }
        // if k is greater than n/2, that means we can buy and sell as many stocks as we want
        if(k>n/2){
            int score=0;
            for(int i=1;i<n;i++){
                score  += max(0 , prices[i]-prices[i-1]);
            }
            return score;
        }
        // otherwise keep track of our balance after every buy and sell activity in an array
        int buys[k];
        int sells[k];
        for(int i=0;i<k;i++)buys[i]=INT_MIN;
        for(int i=0;i<k;i++)sells[i]=0;
        
        for(int i=0;i<n;i++){
            buys[0] = max(buys[0] , -prices[i]);
            sells[0] = max(sells[0] , buys[0] + prices[i]);
            for(int j=1;j<k;j++){
                buys[j] = max(buys[j] , sells[j-1]-prices[i]);
                sells[j] = max(sells[j] , buys[j]+prices[i]);
            }
        }
        return sells[k-1];
    }
};

int main(){
    vector<int> prices = {2,4,6,8,4,9,3,1};
    Solution* sol = new Solution();
    int k = 3;
    cout<<sol->maxProfit(k,prices)<<'\n';
}
