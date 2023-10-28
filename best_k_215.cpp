//最大第k个数
//
//这个题可以用堆，也可以用快速选择算法来搞。在这里把两种方法都实现一遍。
//
//
//




//#include "vector"
//#include "queue"



//--------------------------------------------------------------
//class Solution {
//public:
//    int findKthLargest(std::vector<int>& nums, int k) {
//        std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
//
//        for (const auto& num : nums) {
//            minHeap.push(num);
//
//            if (minHeap.size() > k) {
//                minHeap.pop(); // 保持堆中元素数量为 k
//            }
//        }
//
//        return minHeap.top(); // 返回第 K 个最大元素
//    }
//};

//--------------------------------------------------------------
// 使用C++标准模板库queue提供的优先队列库创建的堆

#include "vector"


class Solution {
public:
    int findKthLargest(std::vector<int>& nums, int k) {


    }

    int backTracking(std::vector<int>& nums, int k, int left, int right)
    {
        int oleft = left;
        int oright = right;

        int pivet = nums[right];

        while (left < right)
        {
            while (left < right && nums[left] <= pivet)
            {
                left++;
            }
            while (left < right && nums[right] > pivet)
            {
                right--;
            }
            std::swap(nums[left], nums[right]);
        }

        if (oright - left == k)
        {
            return nums[k];
        }
        if (oright - left > k)
        {
            return backTracking(nums, k, left, oright);
        }
        if (oright - left < k)
        {
            return backTracking(nums, k + left - (oright + 1), oleft, left);
        }

        return -1;

    }

};