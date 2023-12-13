#include <vector>
#include <algorithm>

class Solution {
private:
    std::vector<std::vector<int>> result;
    int sum = 0;
    std::vector<int> item;
    void backTracking(std::vector<int>& candidates, int target, int start_index) {
        if (sum == target) {
            result.push_back(item);
            return;
        }

        if ((sum > target)) {
            return;
        }

        int cur_item = 0;
        for (int i = start_index; i < candidates.size(); i++) {
            if (candidates[i] != cur_item) {
                item.push_back(candidates[i]);
                sum = sum + candidates[i];
                backTracking(candidates, target, i + 1);
                sum = sum - candidates[i];
                item.pop_back();
                cur_item = candidates[i];
            }
        }
    }

    bool isExist(std::vector<std::vector<int>> result, std::vector<int> item) {
        for (auto it : result) {
            if (item == it) {
                return true;
            }
        }
        return false;
    }

public:
    std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        backTracking(candidates, target, 0);
        return result;
    }
};