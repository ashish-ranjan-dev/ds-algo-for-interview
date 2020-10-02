/*Given an array of non-negative integers, you are initially positioned at the first index of the array.
Each element in the array represents your maximum jump length at that position.
Determine if you are able to reach the last index.*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int lastpos = n-1;
        // just see if you can reach start from the end by back traversing the array
        for(int i=n-2;i>=0;i--){
            if(i+nums[i]>=lastpos){
                lastpos=i;
            }
        }
        if(!lastpos)return true;
        else return false;
    }
};

int main(){
    vector<int> nums = {2,4,6,0,4,9,3,1};
    Solution* sol = new Solution();
    cout<<sol->canJump(nums)<<'\n';
}