/*Given an array of non-negative integers arr, you are initially positioned at start index of the array. When you are at index i, you can jump to i + arr[i] or i - arr[i], check if you can reach to any index with value 0.*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isThere(vector<int>& arr, int start, unordered_set<int>& uset){
        if(start <0 || start >= arr.size())return 0;
        if(uset.find(start)!=uset.end()){
            // if already visited vertex, no need to visit again
            return 0;
        }
        // mark as visited
        uset.insert(start);
        // return 1 if found a vertex with value 0
        if(arr[start]==0)return 1;
        // recursively calling the subproblems
        return isThere(arr,start+arr[start],uset) | isThere(arr,start-arr[start],uset);
    }
    bool canReach(vector<int>& arr, int start) {
        unordered_set<int> uset;
        return isThere(arr,start,uset);
    }
};

int main(){
    vector<int> arr = {2,4,6,0,4,9,3,1};
    int start = 3;
    Solution* sol = new Solution();
    cout<<sol->canReach(arr,start)<<'\n';
}