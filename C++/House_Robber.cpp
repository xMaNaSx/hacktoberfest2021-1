// Famous House Robber DP Problem

#include <bits/stdc++.h>
using namespace std;

class Solution {
    int dp[110];
public:
    int sol(vector<int>& nums, int i,vector<int>& dp) {
        if(i >= nums.size())
            return 0;

           
        if(dp[i] != -1)
            return dp[i];
        
        

        return dp[i] = max(sol(nums,i+2,dp)+nums[i],sol(nums,i+1,dp));
    }
    int rob(vector<int>& nums) {
       
    vector<int> dp(nums.size()+1,-1);

     return sol(nums,0,dp);  
        
    }
};

int main()
{
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    Solution *obj = new Solution;
    int ans = obj->rob(nums);
    cout<< ans;

}