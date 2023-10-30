//
//#include "vector"
//#include "map"
//#include "algorithm"
//
//
//class Solution {
//
//    struct aotm
//    {
//        int number;
//        int count;
//        bool operator<(const aotm& other) const {
//            return count > other.count;  // 以value为例进行排序
//        }
//    };
//
//public:
//    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
//        std::map<int, int> countMap;
//
//
//        for (auto item : nums) countMap[item]++;
//        std::vector<aotm> countAotm;
//        for (auto item : countMap)
//        {
//            aotm a;
//            a.number = item.first;
//            a.count = item.second;
//            countAotm.push_back(a);
//        }
//        std::sort(countAotm.begin(),countAotm.end());
//        return getRes(countAotm, k);
//
//    }
//
//    std::vector<int> getRes(std::vector<aotm> countAotm, int k)
//    {
//        std::vector<int> result;
//        for (int i = 0; i < k; i++)
//        {
//            result.push_back(countAotm[i].number);
//        }
//        return result;
//
//    }
//    
//
//
//};


