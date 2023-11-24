


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

// 多次提交，根据错误用例和提示才做出来的，这个数列逻辑判断也写的并不是很优雅，处理[0,0,0]这种特殊用例，[0,0]这种用例时也很狼狈
// 考虑学习一下GPT的简化代码，逻辑差不多，但GPT实现的更加简洁

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
//                // 保留索引 j 处的元素，移动到下一组元素
//                i = j;
//                j = k;
//                k++;
//            }
//            else {
//                // 擦除索引 j 处的元素
//                nums.erase(nums.begin() + j);
//                k = j + 1;  // 开始比较下一组元素
//            }
//        }
//
//        return nums.size();
//    }
//};
