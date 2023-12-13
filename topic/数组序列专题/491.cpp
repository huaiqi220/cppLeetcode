


#include <vector>

class Solution {
public:
   /* std::vector<std::vector<int>> findSubsequences(std::vector<int>& nums) {
        std::vector<std::vector<int>> res;
        std::vector<int> temp;
        backTracking(nums, res, 0, temp);
        return res;
    }

    void backTracking(std::vector<int>& nums, std::vector<std::vector<int>>& res, int idx, std::vector<int>& temp)
    {
        if (idx == nums.size()) {
            res.push_back(temp); 
            return;
        }
        backTracking(nums, res, idx + 1, temp);

        if (temp.empty() || nums[idx] >= *temp.end()) {
            temp.push_back(nums[idx]);
            backTracking(nums, res, idx + 1, temp);
            temp.pop_back();
        }


    }*/

   /* 最长递增子序列问题*/
    //std::vector<std::vector<int>> findSubsequences(std::vector<int>& nums) {
    //    std::vector<std::vector<int>> res;
    //    std::vector<int> temp;
    //    backTracking(nums, res, 0, temp);

    //    auto it = std::unique(res.begin(), res.end());

    //    // 使用 std::erase 删除重复元素后的部分
    //    res.erase(it, res.end());

    //    return res;
    //}

    //void backTracking(std::vector<int>& nums, std::vector<std::vector<int>>& res, int idx, std::vector<int>& temp)
    //{
    //    if (idx == nums.size()) {
    //        if (temp.size() >= 2)
    //        {
    //            res.push_back(temp);

    //        }
    //        return;
    //    }
    //    backTracking(nums, res, idx + 1, temp);
    //    if (temp.empty() || nums[idx] >= temp.back())
    //    {
    //        temp.push_back(nums[idx]);
    //        backTracking(nums, res, idx + 1, temp);
    //        temp.pop_back();
    //    }

    //}
    

   /* 解答错误
        42 / 58 个通过的测试用例
        [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 1, 1, 1, 1]*/





};