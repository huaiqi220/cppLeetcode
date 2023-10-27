
#include "vector"
#include "iostream"
#include "algorithm"




class Solution {
public:
    int numIslands(std::vector<std::vector<char>>& grid) {

        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == '1')
                {
                    backtracking(grid, i, j);
                    count++;
                }
            }
        }
        return count;

    }

    void backtracking(std::vector<std::vector<char>>& grid, int i,int j)
    {
        if (i < 0 or i >= grid.size() or j < 0 or j >= grid[0].size() or grid[i][j] == '0')
        {
            return;
        }
        grid[i][j] = '0';
        backtracking(grid, i - 1, j);
        backtracking(grid, i + 1, j);
        backtracking(grid, i, j - 1);
        backtracking(grid, i, j + 1);
        return;
        
    }
};


//class Solution {
//public:
//    int numIslands(std::vector<std::vector<char>>& grid) {
//
//        int count = 2;
//        for (int i = 0; i < grid.size(); i++)
//        {
//            for (int j = 0; j < grid[0].size(); j++)
//            {
//                if (grid[i][j] == '1')
//                {
//                    backtracking(grid, i, j, count);
//                    count++;
//                }
//            }
//        }
//        return count - 2;
//
//    }
//
//    void backtracking(std::vector<std::vector<char>>& grid, int i, int j, int mark)
//    {
//        if (i < 0 or i >= grid.size() or j < 0 or j >= grid[0].size() or grid[i][j] == '0' or grid[i][j] == (mark + '0'))
//        {
//            return;
//        }
//        grid[i][j] = mark + '0';
//        backtracking(grid, i - 1, j, mark);
//        backtracking(grid, i + 1, j, mark);
//        backtracking(grid, i, j - 1, mark);
//        backtracking(grid, i, j + 1, mark);
//        return;
//
//    }
//};