class Solution {
public:
    int sumOfDigits(string s){
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum +=(s[i]-'0');
        }
        return sum;
    }
    string convert(string p){
        int n=p.size();
        string result="";
        for(int i=0;i<n;i++){
            result+=to_string((int)(p[i]-'a'+1));
        }
        return result;
    }
    int getLucky(string s, int k) {
        string num=convert(s);
        int ans=sumOfDigits(num);
        for(int i=1;i<k;i++){
            string temp=to_string(ans);
            ans=sumOfDigits(temp);
        }
        return ans;
    }
};