class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> x(n,{1});
        int i,j;
        for(i=1;i<n;i++){
            for(j=1;j<i;j++){ 
                x[i].push_back(x[i-1][j-1]+x[i-1][j]);
            }
            x[i].push_back(1);
        }
        return x;
    }
};