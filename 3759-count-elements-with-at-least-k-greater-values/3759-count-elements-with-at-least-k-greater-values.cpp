class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        //O(nlogn) due to sorting
        int n=nums.size();
        sort(nums.begin(),nums.end());

        int greaterCount=0;
        long long ans=0;
        if(greaterCount>=k) ans++;//for last idx only
        for(int i=n-2;i>=0;i--){
            if(nums[i+1]>nums[i]){
                greaterCount=n-i-1;
            }
            if(greaterCount>=k){
                ans++;
            }
        }
        return ans;
    }
};