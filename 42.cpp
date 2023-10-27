#include "iostream"
#include "algorithm"
#include "vector"



class Solution {
public:

    int trap(std::vector<int>& height) {
        int count = 0;
        std::vector<int> leftMax = getLeftmax(height);
        std::vector<int> rightMax = getRightmax(height);

        for (int i = 0; i < height.size(); i++)
        {
            int item = std::min(leftMax[i], rightMax[i]) - height[i];
            if (item < 0) item = 0;
            count += item;
        }

        return count;

    }

    std::vector<int> getLeftmax(std::vector<int>& height)
    {
        std::vector<int> leftMax(height.size(), 0);
        for (int i = 0; i < height.size(); i++) {
            if (i == 0)
            {
                leftMax[i] = 0;
            }
            else if (i == 1)
            {
                leftMax[i] = std::max(0, height[i - 1]);
            }
            else
            {
                if (height[i - 1] >= leftMax[i - 1])
                {
                    leftMax[i] = height[i -1 ];
                }
                else
                {
                    leftMax[i] = leftMax[i - 1];
                }
            }
        }
        return leftMax;
    }

    std::vector<int> getRightmax(std::vector<int>& height)
    {
        std::vector<int> rightMax(height.size(), 0);
        for (int i = height.size() - 1; i >= 0; i--) {
            if (i == height.size() - 1)
            {
                rightMax[i] = 0;
            }
            else if (i == height.size() - 2)
            {
                rightMax[i] = std::max(0, height[i + 1]);
            }
            else
            {
                if (height[i + 1] >= rightMax[i + 1])
                {
                    rightMax[i] = height[i + 1];
                }
                else
                {
                    rightMax[i] = height[i + 1];
                }
            }
        }
        return rightMax;

    }


    //std::vector<int> getLeftmax1(std::vector<int>& height)
    //{
    //    std::vector<int> leftMax(height.size(), 0);
    //    int maxLeft = 0;

    //    for (int i = 0; i < height.size(); i++) {
    //        leftMax[i] = maxLeft;
    //        maxLeft = std::max(maxLeft, height[i]);
    //    }

    //    return leftMax;
    //}

    //std::vector<int> getRightmax(std::vector<int>& height)
    //{
    //    std::vector<int> rightMax(height.size(), 0);
    //    int maxRight = 0;

    //    for (int i = height.size() - 1; i >= 0; i--) {
    //        rightMax[i] = maxRight;
    //        maxRight = std::max(maxRight, height[i]);
    //    }

    //    return rightMax;
    //}

};


//int main() {
//
//    std::vector<int> list;
//    list.push_back(8);
//    list.push_back(9);
//    list.push_back(5);
//    list.push_back(1);
//    list.push_back(3);
//    list.push_back(9);
//    list.push_back(9);
//    list.push_back(2);
//    list.push_back(9);
//    list.push_back(6);
//    list.push_back(7);
//    list.push_back(7);
//    list.push_back(4);
//    list.push_back(11);
//
//
//    Solution solution;
//    std::vector<int> r1 = solution.getLeftmax1(list);
//
//    for (int item : r1)
//	{
//		std::cout << item;
//
//	}
//    std::cout << std::endl;
//
//    std::vector<int> r = solution.getLeftmax(list);
//
//    for (int item : r)
//    {
//        std::cout << item ;
//    }
//    std::cout << std::endl;
//
//}