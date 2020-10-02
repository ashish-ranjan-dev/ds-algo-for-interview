// When you are allowed to make a single transition only
/* Since only single transtion is allowed, we have to simply find the maximum difference between 2 elements in the price array*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)return 0;
        int maxp = INT_MIN;
        int minp = prices[0];
        for(int i=1;i<prices.size();i++){
            maxp = max(maxp , prices[i] - minp);
            minp = min(minp,prices[i]);
        }
        if(maxp < 0 )return 0;
        return maxp;
    }
};
int main(){
    vector<int> prices = {2,4,6,8,4,9,3,1};
    Solution* sol = new Solution();
    cout<<sol->maxProfit(prices)<<'\n';
}
