#include "vector"
#include "iostream"
#include "algorithm"
#include "string"



class Solution {

public:

	void QuickSort(std::vector<int>& list, int start, int end)
	{
		if (start >= end)
		{
			// 到达边界条件，直接输出结果
			return;
		}
		//以第一个元素作为标杆
		int mark = list[start];
		int left = start;
		int right = end - 1;

		while (left <= right)
		{
			while (list[left] < mark) {
				left++;
			}
			while (list[right] > mark) {
				right--;
			}
			if (left <= right) {
				std::swap(list[left], list[right]);
				left++;
				right--;
			}
		}

		QuickSort(list, start, right + 1);
		QuickSort(list, left, end);


	}







};


//
//int main() {
//
//	std::vector<int> list;
//	list.push_back(8);
//	list.push_back(9);
//	list.push_back(5);
//	list.push_back(1);
//	list.push_back(3);
//	list.push_back(9);
//	list.push_back(9);
//	list.push_back(2);
//	list.push_back(9);
//	list.push_back(6);
//	list.push_back(7);
//	list.push_back(7);
//	list.push_back(4);
//	list.push_back(11);
//
//
//	Solution solution;
//	solution.QuickSort(list, 0, list.size());
//
//	for (int item : list)
//	{
//		std::cout << item << std::endl;
//	}
//
//
//
//
//
//
//}