#include <vector>
#include <algorithm>

//class Solution {
//private:
//    std::vector<std::vector<int>> result;
//    int sum = 0;
//    std::vector<int> item;
//    void backTracking(std::vector<int>& candidates, int target, int start_index) {
//        if (sum == target) {
//            result.push_back(item);
//            return;
//        }
//
//        if ((sum > target)) {
//            return;
//        }
//
//        int cur_item = 0;
//        for (int i = start_index; i < candidates.size(); i++) {
//            if (candidates[i] != cur_item) {
//                item.push_back(candidates[i]);
//                sum = sum + candidates[i];
//                backTracking(candidates, target, i + 1);
//                sum = sum - candidates[i];
//                item.pop_back();
//                cur_item = candidates[i];
//            }
//        }
//    }
//
//    bool isExist(std::vector<std::vector<int>> result, std::vector<int> item) {
//        for (auto it : result) {
//            if (item == it) {
//                return true;
//            }
//        }
//        return false;
//    }
//
//public:
//    std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target) {
//        std::sort(candidates.begin(), candidates.end());
//        backTracking(candidates, target, 0);
//        return result;
//    }
//};


class Solution {
public:
    std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        std::vector<std::vector<int>> res;
        std::vector<int> temp;
        backTracking(candidates, target, 0, 0, temp, res);
        return res;
    }

    void backTracking(std::vector<int>& candidates, int target, int curCount, int idx, std::vector<int>& temp, std::vector<std::vector<int>>& res)
    {
        if (idx >= candidates.size())
        {
            if (curCount == target) {
                //if(std::find(res.begin(),res.end(),temp) == res.end())
                //{
                res.push_back(temp);
 /*               }
                return;*/
            }
            return;
        }
        if (curCount == target) {
            //if (std::find(res.begin(), res.end(), temp) == res.end())
            //{
            res.push_back(temp);
            //}
            return; 
        }
        if (curCount > target) {
            return;
        }

        //backTracking(candidates, target, curCount, idx + 1, temp, res);

        //temp.push_back(candidates[idx]);
        //backTracking(candidates, target, curCount + candidates[idx], idx + 1, temp, res);
        //temp.pop_back();
        int curitem = 0;
        for (int i = idx; i < candidates.size(); i++)
        {
            if (candidates[i] != curitem) {
                temp.push_back(candidates[i]);
                backTracking(candidates, target, curCount + candidates[i], i + 1, temp, res);
                temp.pop_back();
                curitem = candidates[i];
            }

        }

    }
};

// 实现挺快的，就是最后超市各种剪枝费了一会功夫