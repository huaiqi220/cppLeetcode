


#include "vector"


class Solution {
public:
    int findChampion(std::vector<std::vector<int>>& grid) {
        int n = grid.size();
        std::vector<int> winNum(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j and grid[i][j] == 1)
                {
                    winNum[j]++;
                }
                else if (i != j and grid[i][j] != 1)
                {
                    winNum[i]++;
                }
            }
        }

        for (int k = 0; k < n; k++)
        {
            if (winNum[k] == 0)
            {
                return k;
            }
        }

        return -1;
    }
};