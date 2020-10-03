/*Given an array of non-negative integers, you are initially positioned at the first index of the array.
Each element in the array represents your maximum jump length at that position.
Your goal is to reach the last index in the minimum number of jumps.*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n<=1)return 0;
        int limit = nums[0];
        int maxind = nums[0];
        int score=1;
        // A simple trick is used here.
        // keep track of the maximum index you've reached so far
        // whenever you reach an index greater than max_so_far, 
        // update the value and increase the number of jumps by one
        for(int i=0;i<n;i++){
            if(i>limit){
                limit = maxind;
                score++;
            }
            maxind = max(maxind,i+nums[i]);
        }
        return score;
    }
};

int main(){
    vector<int> nums = {2,4,6,0,4,9,3,1};
    Solution* sol = new Solution();
    cout<<sol->jump(nums)<<'\n';
}

