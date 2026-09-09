class Solution {
public:
    int reverseBits(int n) {
        int ans=0;
        for(int i=0;i<32;i++){
            ans=ans<<1;//first bit is slowly moving towards msb 
            ans=ans|(n&1);//doing or will make last bit of ans 1 or 0 acc to bit of n
            n>>=1;//finding last bit of n and first bit of n will come at last
        }
        return ans;
    }
};