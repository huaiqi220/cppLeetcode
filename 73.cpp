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
                    if (!findItem(i,mindex)) {
                        mindex.push_back(i);
                    }
                    if (!findItem(j, nindex)) {
                        nindex.push_back(j);
                    }
                    
                }
            }
        }
        getThefinalMatrix(matrix, mindex, nindex,m,n);


    }

    void getThefinalMatrix(std::vector<std::vector<int>> &matrix, std::vector<int> mindex, std::vector<int> nindex,int m,int n) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (findItem(i, mindex) or findItem(j, nindex)) {
                    matrix[i][j] = 0;
                }

            }
        }
    }

    bool findItem(int item, std::vector<int> list) {
        std::vector<int>::iterator it = std::find(list.begin(), list.end(), item);
        return it != list.end();
    }
};



//时间
//详情
//44ms
//击败 5.71 % 使用 C++ 的用户
//内存
//详情
//41.05MB
//击败 5.06 % 使用 C++ 的用户
//费时间费空间，要换方法