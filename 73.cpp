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



//ʱ��
//����
//44ms
//���� 5.71 % ʹ�� C++ ���û�
//�ڴ�
//����
//41.05MB
//���� 5.06 % ʹ�� C++ ���û�
//��ʱ��ѿռ䣬Ҫ������