


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
            // ���С�����������Ū�ɳ�׾
            // return num;

        }
        return num;
        

    }
};

// ̰�ĵ�һ�⣬455�ֱ��ɣ���Ȼ�������ˣ������ǲ�̫���Ϊʲô�����С��ʼ���䣬�Ӵ�����
// �㷨����¼˵�Ӵ��С���У��Ǿ�ok��
// ע������������⣬������GPT����Bing���ں�������