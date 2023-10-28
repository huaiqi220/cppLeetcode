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

//--------------------------------------------------------------
//#include "vector"
//#include "random"
//
//
//class Solution {
//public:
//    int findKthLargest(std::vector<int>& nums, int k) {
//        return backTracking(nums, k, 0, nums.size() - 1);
//
//    }
//
//    int backTracking(std::vector<int>& nums, int k, int left, int right)
//    {
//        int oleft = left;
//        int oright = right;
//
//        int pivet = nums[right];
//
//        while (left < right)
//        {
//            while (left < right && nums[left] < pivet)
//            {
//                left++;
//            }
//            while (left < right && nums[right] > pivet)
//            {
//                right--;
//            }
//            std::swap(nums[left], nums[right]);
//            if (left == right)
//            {
//                break;
//            }
//
//            left++;
//            right--;
//        }
//
//        if (nums.size() - left == k)
//        {
//            return nums[left];
//        }
//        if (nums.size() - left > k)
//        {
//            return backTracking(nums, k, left, oright);
//        }
//        if (nums.size() - left < k)
//        {
//            return backTracking(nums, k, oleft, left -1);
//        }
//
//        return -1;
//
//    }
//
//};
//--------------------------------------------------------------
//上面这段B代码能处理百分之75的用例，但依然有bug，引用GPT的评价来结尾。

//处理相等元素：该算法没有很好地处理相等元素的情况。这可能会导致出现错误，尤其是在基准元素为数组中的最大或最小值时。

//边界条件处理不准确：if(left == right) 的终止条件可能导致在某些情况下循环永远无法结束。



//int main()
//{
//	std::vector<int> list;
//	//list.push_back(8);
//	//list.push_back(9);
//	//list.push_back(5);
//	//list.push_back(1);
//	//list.push_back(3);
//	//list.push_back(9);
//	//list.push_back(9);
//	//list.push_back(2);
//	//list.push_back(9);
//	//list.push_back(6);
//	//list.push_back(7);
//	//list.push_back(7);
//	//list.push_back(4);
//	//list.push_back(11);
// //   list.push_back(1);
// //   list.push_back(7);
//    //--------------------
//    //list.push_back(3);
//    //list.push_back(2);
//    //list.push_back(3);
//    //list.push_back(1);
//    //list.push_back(2);
//    //list.push_back(4);
//    //list.push_back(5);
//    //list.push_back(5);
//    //list.push_back(6);
//    list.push_back(3);
//    list.push_back(2);
//    list.push_back(1);
//    list.push_back(5);
//    list.push_back(6);
//    list.push_back(4);
//    Solution sol;
//    sol.findKthLargest(list, 2);
//}

//[0]	7	int
//[1]	1	int
//[2]	5	int
//[3]	1	int
//[4]	3	int
//[5]	4	int
//[6]	7	int
//[7]	2	int
//[8]	7	int
//[9]	6	int
//[10]	8	int
//[11]	9	int
//[12]	9	int
//[13]	11	int
//[14]	9	int
//[15]	9	int
//
//未标记[12232][3]	行 86	13	13	{ size = 16 }
//未标记[12232][4]	行 86	13	13	{ size = 16 }
//未标记[12232][5]	行 60	11	13	{ size = 16 }
// 代码在这个用例会出现死循环，究其原因，是没有正确处理好pivot的选值，以及当left == right时如何处理。
