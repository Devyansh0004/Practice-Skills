class Solution {
public:
    int sumOfDigits(string s){
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum +=(s[i]-'0');//use 0 so it doesn't take ascii value to the sum
        }
        return sum;
    }
    string convert(string p){
        int n=p.size();
        string result="";
        for(int i=0;i<n;i++){
            result+=to_string(p[i]-'a'+1);
        }
        return result;
    }
    int getLucky(string s, int k) {
        string num=convert(s);
        for(int i=0;i<k;i++){
            num=to_string(sumOfDigits(num));
        }
        return stoi(num);
    }
};