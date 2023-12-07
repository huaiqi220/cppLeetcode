


#include <vector>
#include <algorithm>
#include <unordered_map>
class Solution {
public:
    //std::vector<int> twoSum(std::vector<int>& nums, int target) {
    //    std::unordered_map<int, int> map;
    //    for (int i = 0; i < nums.size(); i++) {
    //        map[nums[i]] = i;
    //    }


    //    std::sort(nums.begin(), nums.end());

    //    int i = 0;
    //    int j = nums.size() - 1;
    //    std::vector<int> res;
    //    while (i <= j )
    //    {
    //        if (nums[i] + nums[j] > target) { j--; continue; }
    //        if (nums[i] + nums[j] < target) { i++; continue; }
    //        if (nums[i] + nums[j] == target) {
    //            res.push_back(map[i]);
    //            res.push_back(map[j]);
    //            return res;
    //        }
    //    }
    //    return res;

    //}
    // ´íÎó·½·¨


    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> temp;
        for (int i = 0; i < nums.size(); i++)
        {
            temp[nums[i]] = i + 1;
        }
        std::vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            if (temp[target - nums[i]] != 0) {
                res.push_back(i);
                res.push_back(temp[target - nums[i]] - 1);
                return res;
            }
        }
        return res;
    }

};