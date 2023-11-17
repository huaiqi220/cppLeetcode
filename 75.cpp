



#include "vector"


class Solution {
public:
    //void sortColors(std::vector<int>& nums) {
    //    int fw = 0;
    //    int lw = 0;
    //    // init the firstw
    //    for (int i = 0; i < nums.size(); i++)
    //    {
    //        if (nums[i] == 0) {
    //            fw = i;
    //            break;
    //        }
    //    }
    //    // init the lastw
    //    for (int i = nums.size()-1; i >= 0; i--)
    //    {
    //        if (nums[i] == 0) {
    //            lw = i;
    //            break;
    //        }
    //    }


    //    for (int i = 0; i < nums.size(); i++)
    //    {
    //        if (nums[i] == 0) {
    //            if (i < fw) continue;
    //            if (i > fw) {
    //                swap(nums, i, fw);
    //                fw++;
    //                lw++;
    //                i--;
    //            }
    //        }
    //        if (nums[i] == 1) {
    //            if (i < fw)fw = i;
    //            if (i > lw)lw = i;
    //        }
    //        if (nums[i] == 2) {
    //            if (i > lw)continue;
    //            if (i < lw) {
    //                swap(nums, i, lw);
    //                lw--;
    //                fw--;
    //                i--;
    //            }
    //        }
    //    }

    //}

    //void swap(std::vector<int>& nums, int x, int y) {
    //    int cur = nums[y];
    //    for (int i = y; i > x; i--) {
    //        nums[i] = nums[i - 1];
    //    }
    //    nums[x] = cur;
    //}

};

// 复杂又fw的方法，急死了