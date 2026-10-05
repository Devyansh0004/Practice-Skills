class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>freq(101,0);
        int n=nums.size();
        for(int x:nums){
            freq[x]++;
        }
        vector<int>ans;
        int c=0;
        while(c<n){
            for(int i=0;i<101;i++){
                if(freq[i]>0){
                    freq[i]--;
                    ans.push_back(i);
                    c++;
                }
            }
        }
        return ans;
    }
};