class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        //Time Complexity: O(N log N) where N = rows * cols (due to sorting).
        // Space Complexity: O(N) to store the array and the answer.
        vector<pair<int,pair<int,int>>> arr;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                int dist=abs(i-rCenter)+abs(j-cCenter);
                arr.push_back({dist,{i,j}});
            }
        }
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back({arr[i].second.first,arr[i].second.second});
        }
        return ans;
    }
};