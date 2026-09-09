class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int l1=s1.length(),l2=s2.length(),l3=s3.length();
        int minLen=min({l1,l2,l3});
        int same=0;
        for(int i=0;i<minLen;i++){
            if(s1[i]==s2[i] && s2[i]==s3[i]){
                same++;
            }else{
                break;
            }
        }
        if(same==0){
            return -1;
        }else{
            int op=l1-same+l2-same+l3-same;
            return op;
        }
    }
};