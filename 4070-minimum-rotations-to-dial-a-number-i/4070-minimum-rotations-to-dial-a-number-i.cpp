class Solution {
public:
    int minRotations(string s) {
        int rot=0;
        int prev=0;
        for(int i=0;i<s.length();i++){
            int d=s[i]-'0';

            int big=max(d,prev);
            int small=min(d,prev);

            int rot1=big-small;
            int rot2=10-big+small;

            rot+=min(rot1,rot2);
            prev=d;
        }
        return rot;
    }
};