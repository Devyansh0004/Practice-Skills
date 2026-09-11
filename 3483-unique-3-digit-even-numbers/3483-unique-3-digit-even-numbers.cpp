class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<bool> vis(1000,false);
        int ans=0;
        int n=digits.size();

        for(int i=0;i<n;i++){
            if(digits[i]==0) continue;
            for(int j=0;j<n;j++){
                if(j==i) continue;//we r skiping the same index not the same digit so  same digit freq can be used 
                for(int k=0;k<n;k++){
                    if(k==i || k==j || digits[k]%2!=0) continue;

                    int num=digits[i]*100+digits[j]*10+digits[k];
                    if(!vis[num]){
                        vis[num]=true;
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};