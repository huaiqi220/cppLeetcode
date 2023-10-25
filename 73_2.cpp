#include "iostream"
#include "vector"



class Solution {
public:
    void setZeroes(std::vector<std::vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        std::vector<int> mindex;
        std::vector<int> nindex;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    setColumnZero(matrix, i, n);
                    setLineZero(matrix, j, m);
                }
            }
        }
        


    }

    void setColumnZero(std::vector<std::vector<int>> &matrix, int i,int n) {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = 0;
        }
    }

    void setLineZero(std::vector<std::vector<int>> &matrix, int j, int m) {
        for (int i = 0 ; i < m; i++) {
            matrix[i][j] = 0;
        }
    }


};

//思路明显是错的， 这种方式没避免先0行列对后面的影响，最终导致全是0



