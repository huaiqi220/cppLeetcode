


#include "string"
#include "vector"
#include "map"
#include "unordered_map"


class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int lwindow = 0;
        int rwindow = 0;
        while (rwindow != s.size())
        {
            if (testWindow(s, lwindow, rwindow))
            {
                
                rwindow++;
            }
            else
            {
                lwindow++;
                rwindow++;
            }
        }
        return rwindow - lwindow;




    }

    bool testWindow(std::string s, int left, int right)
    {
        std::unordered_map<char, int> myMap;
        for (int i = left; i <= right; i++)
        {
            if (myMap[s[i]] > 0)
            {
                return false;
            }
            myMap[s[i]]++;
        }
        return true;
    }


};

// 把testWindow的逻辑写到主循环里可以显著减小时间复杂度和多次重复计算。


//时间
//详情
//1152ms
//击败 5.05 % 使用 C++ 的用户
//内存
//详情
//349.64MB
//击败 4.99 % 使用 C++ 的用户