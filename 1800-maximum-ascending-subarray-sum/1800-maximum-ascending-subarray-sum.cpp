class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        long long maxSum=nums[0];
        long long currSum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                currSum+=nums[i];
            }else{
                currSum=0;
                currSum+=nums[i];
            }
            maxSum=max(maxSum,currSum);
        }
        return maxSum;
    }
};