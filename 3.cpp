


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

// ��testWindow���߼�д����ѭ�������������Сʱ�临�ӶȺͶ���ظ����㡣


//ʱ��
//����
//1152ms
//���� 5.05 % ʹ�� C++ ���û�
//�ڴ�
//����
//349.64MB
//���� 4.99 % ʹ�� C++ ���û�