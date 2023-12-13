#include <vector>


class Solution {
public:
    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        std::vector<std::vector<int>> res;
        std::vector<int> item;
        combinationSum(res, candidates, target, 0, item);

        return res;
    }
    void combinationSum(std::vector<std::vector<int>>& res, std::vector<int>& candidates, int target, int idx, std::vector<int>& item) {
        if (target < 0 or idx > candidates.size() -1) return;
        if (target == 0) { res.push_back(item); return; }
        item.push_back(candidates[idx]);
        combinationSum(res, candidates, target - candidates[idx], idx, item);
        item.pop_back();

        combinationSum(res, candidates, target, idx + 1, item);
        return;
    }
};

  /*   这题其实写出来没什么难的，但问题是一开始的回溯思路不简单
     说明回溯思路还是太浅显，不到位

     我计划直接for(item : candidates)，这种方法当然能做出所有组合，但这种方法的结果是排列，不是组合
     组合不讲先后顺序，
     在此非常巧妙的方法就是给一个idx，限定候选下标范围，一旦idx++，后面的组合不可能出现前面的值，从而直接排除了重复的可能性*/