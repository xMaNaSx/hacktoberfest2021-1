#include<bits/stdc++.h>
class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int sum = 0;
        int maxs = nums[0];
        int i;
        for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
         maxs = std::max(sum,maxs);
            if(sum<0){
                sum=0;
            }
    }
        return maxs;

    }
};
int main()
{
    std::vector<int> nums;
    nums.push_back(-2);
    nums.push_back(-1);
    nums.push_back(-3);
    nums.push_back(4);
    nums.push_back(-1);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(-5);
    nums.push_back(-4);
    Solution obj;
    std::cout<<obj.maxSubArray(nums);
}
