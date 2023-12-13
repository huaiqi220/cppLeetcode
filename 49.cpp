




#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include <algorithm>

class Solution {
public:
    // 超时
    //std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
    //    std::set<std::string> sortStrSet;
    //    for (auto item : strs)
    //    {
    //        std::string strcopy = item;
    //        std::sort(strcopy.begin(), strcopy.end());
    //        if (sortStrSet.find(strcopy) == sortStrSet.end()) {
    //            sortStrSet.insert(strcopy);
    //        }
    //    }
    //    std::vector<std::vector<std::string>> res;
    //    std::vector<std::string> everykind;
    //    for (auto item : sortStrSet) {
    //        for (auto str : strs) {
    //            std::string strcopy = str;
    //            std::sort(strcopy.begin(), strcopy.end());
    //            if (strcopy == item) {
    //                everykind.push_back(str);
    //            }
    //        }
    //        res.push_back(everykind);
    //        everykind.clear();
    //    }
    //    return res;


    //}

    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>*> resmap;
        for (auto item : strs) {
            std::string strcopy = item;
            std::sort(strcopy.begin(), strcopy.end());
            if (resmap[strcopy] != nullptr) {
                resmap[strcopy]->push_back(item);
            }
            else {
                std::vector<std::string>* newkind = new std::vector<std::string>();
                newkind->push_back(item);
                resmap[strcopy] = newkind;
            }
        }
        std::vector<std::vector<std::string>> res;
        for (auto item : resmap)
        {
            std::vector<std::string>* everykind = item.second;
            res.push_back(*everykind);
        }
        return res;
    }
    // 对指针，map的运用有进步，坚持学习@！！
};