


#include "vector"
#include <algorithm>
#include <iostream>


class Solution {
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        int num(0);
        std::sort(g.begin(), g.end(),std::greater<>());
        std::sort(s.begin(), s.end(), std::greater<>());
        
        for (auto item : g) {
            std::vector<int>::iterator be = s.begin();
            std::vector<int>::iterator en = s.end();
            
            while (be != en) {
                if (*be >= item) {
                    num++;
                    s.erase(be);
                    break;

                }
                else
                {
                    be++;
                }
            }
            // 想减小计算量，结果弄巧成拙
            // return num;

        }
        return num;
        

    }
};

// 贪心第一题，455分饼干，虽然做出来了，但还是不太理解为什么必须从小开始分配，从大不行吗
// 算法随想录说从大从小都行，那就ok吧
// 注：这个分配问题，不管是GPT还是Bing都在胡言乱语