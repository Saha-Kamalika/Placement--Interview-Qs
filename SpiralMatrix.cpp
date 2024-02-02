Sclass Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int sr=0, er=m-1, sc=0, ec=n-1;
        vector<int> ans;
        int i=0;
        while(i<n*m){
            for(int j=sc;j<=ec;j++){
                ans.push_back(matrix[sr][j]);
                i++;
            }
            sr++;
            if(i==n*m) break;
            for(int j=sr;j<=er;j++){
                ans.push_back(matrix[j][ec]);
                i++;
            }
            ec--;
            if(i==n*m) break;
            for(int j=ec;j>=sc;j--){
                ans.push_back(matrix[er][j]);
                i++;
            }
            er--;
            if(i==n*m) break;
            for(int j=er;j>=sr;j--){
                ans.push_back(matrix[j][sc]);
                i++;
            }
            sc++;
            if(i==n*m) break;
        }
        return ans;
    }
};
