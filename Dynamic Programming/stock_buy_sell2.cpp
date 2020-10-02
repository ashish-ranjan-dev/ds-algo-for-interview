// When you are allowed to make at most two transitions only
/* Since two transitions are allowed, we need to keep track of our balance everytime we buy or sell the stock and hence taking maximum value always*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int fb = INT_MIN;
        int fs = 0;
        int sb = INT_MIN;
        int ss = 0;
        for(int i=0;i<prices.size();i++){
            fb = max(fb, -prices[i]);
            fs = max(fs, fb + prices[i]);
            sb = max(sb, fs - prices[i]);
            ss = max(ss, sb + prices[i]);
        }
        return ss;
    }
};
int main(){
    vector<int> prices = {2,4,6,8,4,9,3,1};
    Solution* sol = new Solution();
    cout<<sol->maxProfit(prices)<<'\n';
}