class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(),N = matrix[0].size();
        for(int i=0; i<M; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    for(int ii=0; ii<M; ii++) matrix[ii][j]=0;
                    for(int jj=0; jj<N; jj++) matrix[i][jj]=0;
                }
            }
        }
    }
};
