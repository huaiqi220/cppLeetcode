

#include <vector>

class Solution {
public:
   /* void moveZeroes(std::vector<int>& nums) {
        int stopindex = nums.size() - 1;
        for (int i = 0; i <= stopindex; i++)
        {
            if (nums[i] == 0) {
                nums.erase(nums.begin() + i);
                i--;
                nums.push_back(0);
                stopindex--;
            }
        }


    }*/

    void moveZeroes(std::vector<int>& nums) {
        int first0 = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) { first0 = i; break; }
        }
        if (first0 == -1) return;

        int first0_1 = first0;
        while (first0_1 <= nums.size() - 1)
        {
            if (nums[first0_1] == 0) {
                first0_1++;
            }
            else {
                std::swap(nums[first0], nums[first0_1]);
                first0_1++;
                first0++;
            }
        }
    }
    // 效率吊打使用了Erase库函数的第一种方法
};