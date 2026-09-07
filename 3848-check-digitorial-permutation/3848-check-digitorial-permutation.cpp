class Solution {
public:
    void factorialPreCompute(vector<int>&fac){
        for(int i=2;i<9;i++){
            fac[i]=fac[i-1]*i;
        }
    }
    bool isDigitorialPermutation(int n) {
        //Precompute fac already and check for one case otherwise its facsum generated is check is it can be permutation of n
        vector<int> fac(10,1);
        factorialPreCompute(fac);
        
        vector<int> digits(10,0);
        int temp=n;
        int facSum=0;
        while(temp>0){
            int ld=temp%10;
            facSum+=fac[ld];
            digits[ld]++;
            temp=temp/10;
        }

        if(facSum==n){
            return true;
        }
        while(facSum>0){
            int ld=facSum%10;
            digits[ld]--;
            facSum/=10;
        }
        bool allZero=all_of(digits.begin(),digits.end(),[](int x){
            return x==0;
        });
        return allZero;
    }
};