



#include <vector>
#include <algorithm>
#include <cmath>

class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        std::vector<int> temp;
        if (n == 0)return 0;

        while (n != 0) {
            temp.push_back(n % 10);
            n = n / 10;
        }
        if (temp.size() == 1)return n;
        int i = 0;
        int j = 1;
        while (j <= temp.size() - 1) {
            if (temp[i] >= temp[j]) {
                i++;
                j++;
            }
            else {
                for (int k = 0; k <= i; k++) temp[k] = 9;
                temp[j] = temp[j] - 1;

            }
        }
        return combine(temp);

    }

    int combine(const std::vector<int>& temp)
    {
        int result = 0;
        for (int i = 0; i < temp.size(); i++)
        {
            result += temp[i] * std::pow(10, i);
        }
        return result;
    }
};

// 一次没考虑到0，第二次就AC，超过时间100%，还可以，不过题目还算是比较简单
// 这是贪心？没看出是贪心