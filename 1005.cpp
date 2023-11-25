//
//
//#include "vector"
//#include "algorithm"
//
//class Solution {
//public:
//    int largestSumAfterKNegations(std::vector<int>& nums, int k) {
//        std::sort(nums.begin(), nums.end());
//        int count = 0;
//        int zero_count = 0;
//        for (auto item : nums)
//        {
//            if (item < 0)count++;
//            if (item == 0)zero_count++;
//        }
//
//        k = getTheNumber(nums,count, k, zero_count);
//        int result = 0;
//        for (auto item : nums)
//        {
//            if (k > 0)
//            {
//                result += -item;
//                k--;
//            }
//            else
//            {
//                result += item;
//            }
//        }
//        return result;
//        
//
//    }
//
//
//    int getTheNumber(std::vector<int>& nums,int count, int k,int zero_num)
//    {
//        if (count >= k) return k;
//
//        if (count < k)
//        {
//            int extra = k - count;
//            if (extra % 2 == 0 || (extra % 2 == 1 and zero_num != 0))
//            {
//                return count;
//            }
//
//            if (extra % 2 == 1 and zero_num == 0)
//            {
//                return std::abs(count - 1);
//            }
//            
// 
//        }
//        return 0;
//            
//    }
//};

//简单题目想复杂了，明天用多种方法做一下


#include <vector>
#include <algorithm>

class Solution {
public:
    int largestSumAfterKNegations(std::vector<int>& nums, int k) {

        std::vector<int> neg;
        std::vector<int> posi;
        bool zero_num = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) posi.push_back(nums[i]);
            if (nums[i] < 0) neg.push_back(nums[i]);
            if (nums[i] == 0) zero_num = true;
        }
        std::sort(neg.begin(), neg.end());
        std::sort(posi.begin(), posi.end());

        if (k <= neg.size()) {
            // 负数从小到到大变正
            for (int i = 0; i < k; i++) {
                neg[i] = -neg[i];
            }
            return getResult(posi, neg);
        }
        else if (k > neg.size() ) {
            // 全部取反，然后整体sort，然后从小开始反剩下的
            for (int i = 0; i < neg.size(); i++) {
                posi.push_back(-neg[i]);
            }
            int count = k - neg.size();

            if (count % 2 == 0) {
                return getResult(posi);
            }
            else {
                if (zero_num) {
                    return getResult(posi);
                }
                else {
                    std::sort(posi.begin(), posi.end());
                    posi[0] = -posi[0];
                    return getResult(posi);
                }
            }

            
        }
        return -1;




    }


    int getResult(const std::vector<int>& posi, const std::vector<int>& neg) {
        int count = 0;
        for (auto item : neg)count += item;
        for (auto item : posi)count += item;
        return count;
    }
    int getResult(const std::vector<int>& posi) {
        int count = 0;
        for (auto item : posi)count += item;
        return count;
    }
};

