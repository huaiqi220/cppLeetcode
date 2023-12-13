

#include <vector>


class Solution {

public:
	void QuickSort(std::vector<int>& nums) {
		



	}

	void QuickSort(std::vector<int>& nums, int left, int right)
	{
		int origin_left = left;
		int origin_right = right;
		int pivor = nums[left];
		while (left< right)
		{
			if (nums[right] > pivor)right--;
			if (nums[left] < pivor) left++;
			int temp = nums[right];
			nums[right] = nums[left];
			nums[left] = temp;

		}

		QuickSort(nums, origin_left, left);
		QuickSort(nums, right, origin_right);

	}

	


};