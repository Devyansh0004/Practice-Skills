class Solution {
public: 
    int fastExpo(long long x,long long n){
        long long ans=1;
        while(n>0){
            if(n&1){
                ans=ans*x;
            }
            x=x*x;
            n>>=1;
        }
        return ans;
    }
    int reverseBits(int n) {
        //can use fastExpo for better TC
        vector<int>bit(32,0);
        int temp=n;
        int i=0;
        while(temp>0){
            bit[i]=temp&1;
            temp>>=1;
            i++;
        }
        long long ans=0;
        for(int i=31;i>=0;i--){
            if(bit[i]==1){
                ans=ans+fastExpo(2,31-i);
            }
        }
        return (int)ans;
    }
};