

#include <vector>
#include <unordered_map>

class Solution {
public:
    // 费时间费空间飞舞方法，让我看看答案是怎么会是
    //int singleNumber(std::vector<int>& nums) {
    //    std::unordered_map<int, bool> temp;
    //    for (auto item : nums)
    //    {
    //        if (temp.find(item) == temp.end())
    //        {
    //            temp[item] = true;
    //        }
    //        else if (temp[item] == true)
    //        {
    //            temp[item] = false;
    //        }
    //    }

    //    for (auto item : temp)
    //    {
    //        if (item.second == true)
    //        {
    //            return item.first;
    //        }
    //    }
    //    return -1;

    //}

    // 异或运算，不多说了 ^=   A^A = 0; 0^A = A;符合分配律结合律
    int singleNumber(std::vector<int>& nums) {
        int count = 0;
        for (auto item : nums) count ^= item;
        return count;
    }
};