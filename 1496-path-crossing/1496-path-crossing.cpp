class Solution {
public:
    struct PairHash {
        size_t operator()(const pair<int, int>& p) const {
            return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
        }
    };
    bool isPathCrossing(string path) {
        int n=path.size();
        unordered_set<pair<int,int>,PairHash> st;
        int x=0,y=0;
        st.insert({x,y});
        for(int i=0;i<n;i++){

            if(path[i]=='N') y++;
            else if(path[i]=='S') y--;
            else if(path[i]=='E') x++;
            else x--;

            if(st.find({x,y})!=st.end()) return true;
            st.insert({x,y});
        }
        return false;
    }
};