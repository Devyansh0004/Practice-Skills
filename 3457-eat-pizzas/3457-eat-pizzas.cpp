class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        int n=pizzas.size();
        sort(pizzas.begin(),pizzas.end());
        int days=n/4;
        int even=days/2;
        int odd=days-even;
        
        int i=n-1;
        long long ans=0;
        while(odd>0){
            ans+=pizzas[i];
            i--;
            odd--;
        }
        
        while(even>0){
            i--;
            ans+=pizzas[i];
            i--;
            even--;
        }
        return ans;
    }
};