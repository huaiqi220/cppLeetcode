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
//�������B�����ܴ���ٷ�֮75������������Ȼ��bug������GPT����������β��

//�������Ԫ�أ����㷨û�кܺõش������Ԫ�ص����������ܻᵼ�³��ִ����������ڻ�׼Ԫ��Ϊ�����е�������Сֵʱ��

//�߽���������׼ȷ��if(left == right) ����ֹ�������ܵ�����ĳЩ�����ѭ����Զ�޷�������



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
//δ���[12232][3]	�� 86	13	13	{ size = 16 }
//δ���[12232][4]	�� 86	13	13	{ size = 16 }
//δ���[12232][5]	�� 60	11	13	{ size = 16 }
// ��������������������ѭ��������ԭ����û����ȷ�����pivot��ѡֵ���Լ���left == rightʱ��δ���
