



#include "vector"

class Solution {
public:
    void rotate(std::vector<std::vector<int>>& matrix) {
        // [y,x] - > [x, n - y]7
        int n = matrix.size();
        int l;
        int c;
        if (n % 2 == 0)
        {
            l = n / 2;
            c = n / 2;
        }
        else
        {
            l = n / 2 + 1;
            c = n / 2;
        }

        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < l; j++)
            {
                int cur = matrix[i][j];
                // 
                matrix[i][j] = matrix[n - 1 - j][i];
                matrix[n - 1 - j][i] = matrix[n - 1 - i][n - 1 - j];
                matrix[n - 1 - i][n - 1 - j] = matrix[j][n - 1 - i];
                matrix[j][n - 1 - i] = cur;

            }
        }



    }
};

//
//
//      __ __ __ __ __
//     |[i][j]  -->   |[j][n-i]
//     |              |
//     |              |
//     |              |
//     |              |
//     |__ __ __ __ __|[n-i][n-j]
//     [n-j][i]  <--
//
//
//
