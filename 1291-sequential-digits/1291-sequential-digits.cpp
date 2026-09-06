class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        //Most optimised Approach :use Parent full string
        string p="123456789";
        vector<int>ans;
        for(int i=0;i<9;i++){
            for(int len=1;len<=9-i;len++){
                int num=stoi(p.substr(i,len));
                if(num>=low && num<=high){
                    ans.push_back(num);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
    // bool isSequential(int n){
    //     int prev=(n%10)+1;
    //     while(n>0){
    //         int ld=n%10;
    //         if(ld!=prev-1) return false;
    //         prev=ld;
    //         n=n/10;
    //     }
    //     return true;
    // }
    // vector<int> sequentialDigits(int low, int high) {
    //     //Brute Force Approach
    //     vector<int>ans;
    //     for(int i=low;i<=high;i++){
    //         if(isSequential(i)) ans.push_back(i);
    //     }
    //     return ans;
    // }
};