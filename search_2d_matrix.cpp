class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size()-1;
        int l = 0, m = 0;
        int mrsize = 0;
        mrsize = matrix[0].size()-1;
        while(l<=r) {
            m = (l+r)/2;
            if(target < matrix[m][0]) {
                r = m-1;
                continue;
            }
            //cout << "L " << matrix[m][0] << " ";
            if(target > matrix[m][mrsize]) {
                l = m+1;
                continue;
            }
            //cout << "R " << matrix[m][mrsize] << " ";
            if((matrix[m][0] <= target) && (matrix[m][mrsize] >= target)) {
                for(int i = 0; i <= mrsize; i++) {
                    //cout << matrix[m][i];
                    if(matrix[m][i] == target) {
                        return true;
                    }
                }
                return false;
            }
        }
        return false;
    }
};
