


#include "vector"


class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int big = 0;
        for (int i = 0; i < m; i++)
        {
            int max = matrix[i][n - 1];
            if (max >= target)
            {
                big = i;
                break;
            }

        }

        for (int k = 0; k < n; k++)
        {
            int cur = matrix[big][k];
            if (cur == target)
            {
                return true;
            }
        }
        return false;



    }
};

//int main()
//{
//    std::vector<std::vector<int>> matrix = {
//    {1, 3, 5, 7},
//    {10, 11, 16, 20},
//    {23, 30, 34, 60}
//    };
//
//    Solution solution;
//    solution.searchMatrix(matrix, 3);
//}

// 忘了一句break， 两次才ac