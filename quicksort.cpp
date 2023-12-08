

#include <vector>


class Solution {

public:
	void QuickSort(std::vector<int>& nums) {
		



	}

	void QuickSort(std::vector<int>& nums, int left, int right)
	{
		
		int pivor = nums[left];
		while (left< right)
		{
			if (nums[right] > pivor)right--;
			if (nums[left] < pivor) left++;
			int temp = nums[right];
			nums[right] = nums[left];
			nums[left] = temp;

		}
		QuickSort(nums,left,)

	}

	


};