class Solution {
public:
    int countCommas(int n) {
        //see the constraint yaar
        if(n<1000){
            return 0;
        }else{
            return n-1000+1;
        }
    }
};