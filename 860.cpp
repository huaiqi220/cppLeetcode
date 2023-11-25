
#include <vector>

#include <algorithm>


class Solution {
public:
    bool lemonadeChange(std::vector<int>& bills) {
        int n5(0);
        int n10(0);
        int n20(0);
        for (auto item : bills) {
            if (!canExange(item, n5, n10, n20))return false;
        }
        return true;

    }


    bool canExange(int curMoney,int &n5,int &n10,int &n20) {
        int num = curMoney - 5;
        if (num == 0) {
            // ����һ�����
            n5++;
            return true;
        }
        if (num == 5) {
            if (n5 >= 1) {
                n5 = n5 - 1;
                n10++;
                return true;
            }
            return false;

        }
        if (num == 15) {
            // ������10���ó�ȥ����������5
            if (n10 >= 1 and n5 >= 1) {
                n10--; n5--;
                n20++; return true;
            }
            else if (n5 >= 3) {
                n5 = n5 - 3;
                return true;
            }
            else {
                return false;
            }
        }
        return false;

    }
};

// ̰�ģ�
