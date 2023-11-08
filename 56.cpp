



#include "vector"


class Solution {
public:
    std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
        std::vector<int> num(20002, 0);
        for (auto item : intervals)
        {
            for (int i = item[0] * 2; i <= item[1] * 2; i++)
            {
                num[i] = 1;
            }
        }
        num[20001] = 0;


        std::vector<std::vector<int>> res;
        int j = 0;
        int start_index = 0;
        bool mark = false;
        int end_index = 0;
        while (j <= 20001)
        {
            if (num[j] == 1 and mark == false)
            {
                start_index = j;
                mark = !mark;
            }

            if (num[j] == 0 and mark == true)
            {
                std::vector<int> item{ start_index / 2,(j - 1) / 2 };
                res.push_back(item);
                start_index = 0;
                mark = !mark;
            }
            j++;
        }
        return res;

    }
};


// 丑陋的散装方法
// 必须重做