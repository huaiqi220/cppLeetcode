



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
    // ������fw�ķ�����������

    //void swap(std::vector<int>& nums, int x, int y) {
    //    int cur = nums[y];
    //    for (int i = y; i > x; i--) {
    //        nums[i] = nums[i - 1];
    //    }
    //    nums[x] = cur;
    //}

    //void sortColors(std::vector<int>& nums) {
    //    //����ʹ������ 0�� 1 �� 2 �ֱ��ʾ��ɫ����ɫ����ɫ��
    //    int left = 0;
    //    int right = nums.size() - 1;
    //    while(left < right)
    //    {
    //        while (nums[left] < 2 and left < nums.size() -1)left++;
    //        while (nums[right] > 0 and right > 0)right--;
    //        if (left < right) {
    //            std::swap(nums[left], nums[right]);
    //        }
    //    }


    //}


    // ��ָ������ɨ��
    //void sortColors(std::vector<int>& nums) {
    //    int head_index = 0;
    //    int moveindex = 0;
    //    while (moveindex < nums.size()) {
    //        if (nums[moveindex] == 0) {
    //            std::swap(nums[head_index], nums[moveindex]);
    //            moveindex++;
    //            head_index++;
    //        }
    //        else {
    //            moveindex++;
    //        }
    //    }

    //    int end_index = nums.size() - 1;
    //    moveindex = nums.size() - 1;
    //    while (moveindex >= 0) {
    //        if (nums[moveindex] == 2) {
    //            std::swap(nums[end_index], nums[moveindex]);
    //            moveindex--;
    //            end_index--;
    //        }
    //        else {
    //            moveindex--;
    //        }
    //    }

    //}

    // ˫ָ��



};

