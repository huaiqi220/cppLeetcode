//����k����
//
//���������öѣ�Ҳ�����ÿ���ѡ���㷨���㡣����������ַ�����ʵ��һ�顣
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
//                minHeap.pop(); // ���ֶ���Ԫ������Ϊ k
//            }
//        }
//
//        return minHeap.top(); // ���ص� K �����Ԫ��
//    }
//};

//--------------------------------------------------------------
// ʹ��C++��׼ģ���queue�ṩ�����ȶ��пⴴ���Ķ�

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