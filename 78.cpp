


#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
        std::vector<int> temp;
        std::vector<std::vector<int>> result;
        backTracking(0, nums, temp, result);
        return result;


    }

    void backTracking(int curIndex, const std::vector<int>& nums, std::vector<int>& temp, std::vector<std::vector<int>>& result)
    {
        if (curIndex == nums.size()) {
            result.push_back(temp);
            return;
        }
        // ȡ������
        int num = nums[curIndex];

        temp.push_back(num);
        backTracking(curIndex + 1, nums, temp, result);
        temp.pop_back();
        backTracking(curIndex + 1, nums, temp, result);

    }
};

// ��׼�ĵݹ飬ûʲô�Ѷȣ���ʹ�����д�����ˣ���Ȼ�������������Ż��Ŀռ�
// �����õ�����һ��