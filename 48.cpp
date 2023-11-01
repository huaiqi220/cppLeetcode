



#include "vector"


class Solution {
public:
    void rotate(std::vector<std::vector<int>>& matrix) {
        // [y,x] - > [x, n - x]
        std::vector<std::vector<int>> ret;
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            std::vector<int> item(0,n);
            ret.push_back(item);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ret[j, n - i] = matrix[i, j];
            }
        }
        matrix = ret;


    }
};