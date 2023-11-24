


#include <vector>

class Solution {
public:
    int wiggleMaxLength(std::vector<int>& nums) {

        if (nums.size() <= 1) return nums.size();
        if (nums.size() == 2) return nums[0] == nums[1] ? 1 : 2;

        std::vector<int> mid;
        int i(0);
        int j(1);
        int k(2);
        while (k < nums.size())
        {
            if (nums[k] > nums[j] and nums[j] > nums[i]) {
                nums.erase(nums.begin() + j);
                continue;

            }
            else if (nums[k] > nums[j] and nums[j] < nums[i]) {
                i++;
                j++;
                k++;
                continue;
            }
            else if (nums[k] < nums[j] and nums[j] > nums[i]) {
                i++;
                j++;
                k++;
                continue;
            }
            else if (nums[k] < nums[j] and nums[j] < nums[i]) {
                nums.erase(nums.begin() + j);
                continue;
            }
            else if (nums[k] < nums[j] and nums[j] == nums[i]) {
                nums.erase(nums.begin() + j);
                continue;
            }
            else if (nums[k] == nums[j] and nums[j] < nums[i]) {
                nums.erase(nums.begin() + j);
                continue;
            }
            else if (nums[k] > nums[j] and nums[j] == nums[i]) {
                nums.erase(nums.begin() + j);
                continue;
            }
            else if (nums[k] == nums[j] and nums[j] > nums[i]) {
                nums.erase(nums.begin() + j);
                continue;
            }
            else if (nums[k] == nums[j] and nums[j] == nums[i]) {
                nums.erase(nums.begin() + j);
                nums.erase(nums.begin() + j);
                continue;
            }
        }
        return nums.size();




    }
};

// ����ύ�����ݴ�����������ʾ���������ģ���������߼��ж�Ҳд�Ĳ����Ǻ����ţ�����[0,0,0]��������������[0,0]��������ʱҲ���Ǳ�
// ����ѧϰһ��GPT�ļ򻯴��룬�߼���࣬��GPTʵ�ֵĸ��Ӽ��

//class Solution {
//public:
//    int wiggleMaxLength(std::vector<int>& nums) {
//        if (nums.size() <= 2) return nums.size();
//
//        int i = 0;
//        int j = 1;
//        int k = 2;
//
//        while (k < nums.size()) {
//            if ((nums[j] > nums[i] && nums[k] < nums[j]) || (nums[j] < nums[i] && nums[k] > nums[j])) {
//                // �������� j ����Ԫ�أ��ƶ�����һ��Ԫ��
//                i = j;
//                j = k;
//                k++;
//            }
//            else {
//                // �������� j ����Ԫ��
//                nums.erase(nums.begin() + j);
//                k = j + 1;  // ��ʼ�Ƚ���һ��Ԫ��
//            }
//        }
//
//        return nums.size();
//    }
//};
