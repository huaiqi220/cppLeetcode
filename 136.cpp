

#include <vector>
#include <unordered_map>

class Solution {
public:
    // ��ʱ��ѿռ���跽�������ҿ���������ô����
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

    // ������㣬����˵�� ^=   A^A = 0; 0^A = A;���Ϸ����ɽ����
    int singleNumber(std::vector<int>& nums) {
        int count = 0;
        for (auto item : nums) count ^= item;
        return count;
    }
};