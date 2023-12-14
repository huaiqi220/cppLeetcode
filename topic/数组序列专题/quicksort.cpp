

#include <vector>


class Solution {


public:

	void QuickSort(std::vector<int>& nums, int left, int right)
	{
		int mleft = left;
		int mright = right;
		int pivor = nums[left];
		
		if (left < right) {
			while (left < right)
			{
				while (nums[left] <= pivor)left++;
				while (nums[right] >= pivor)right--;
				if (left < right) {
					std::swap(nums[left], nums[right]);
				}

			}
			std::swap(nums[mleft], nums[right]);
			QuickSort(nums, mleft, right - 1);
			QuickSort(nums, right + 1, mright);
		}
	}



};

int main() {
	int a[] = { 5,9,12,75,765,4,5,9,34,567,43,23,65,344,967,52,41,64,89,321,325,897,43,12,87,43,12,164,1765,2,65,567 };
	std::vector<int> test(a, a + 30);
	Solution solution;
	solution.QuickSort(test, 0, test.size() - 1);
}