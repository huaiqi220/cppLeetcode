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