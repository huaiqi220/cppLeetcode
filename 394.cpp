
#include <string>
#include <stack>
#include <cmath>

class Solution {
public:
    //std::string decodeString(std::string s) {
    //    std::stack<char> temp;
    //    if (s.size() == 1 or s.size() == 0) return s;
    //    for (int ix = 0; ix < s.size(); )
    //    {
    //        if (s[ix] != '[')
    //        {
    //            temp.push(s[ix]);
    //            ix++;
    //            continue;
    //        }
    //        else {
    //            int num = temp.top();
    //            temp.pop();
    //            std::string tem;
    //            int index = ix + 1;
    //            char cur = s[index];
    //            while (cur != ']') {
    //                tem += cur;
    //                index++;
    //            }
    //            for (int j = 1; j < num; j++) {
    //                tem += tem;
    //            }
    //            for (auto item : tem) temp.push(item);
    //            ix = index + 1;
    //        }
    //    }

    //    std::string res = "";
    //    while (temp.empty())
    //    {
    //        res = temp.top() + res;
    //        temp.pop();
    //    }
    //    return res;
    //    
    //}
    // ˼·���ˣ���ȫ�����ǣ�[]������[]�����




    //std::string decodeString(std::string s) {
    //    std::stack<std::string> res;
    //    for (int ix = 0; ix < s.size(); ix++)
    //    {
    //        
    //        if (s[ix] != ']')
    //        {
    //            std::string temp;
    //            temp = s[ix];
    //            res.push(temp);
    //        }
    //        else {
    //            std::string cEpoch;
    //            std::string cur = res.top();
    //            res.pop();
    //            while (cur != "[")
    //            {
    //                cEpoch = cur + cEpoch;                
    //                cur = res.top();
    //                res.pop();
    //            }
    //            int num = getNum(res);
    //            for (int j = 0; j < num; j++)res.push(cEpoch);
    //        }
    //    }

    //    return together(res);

    //}



    //int getNum(std::stack<std::string>& temp)
    //{
    //    int num = 0;
    //    int level = 0;
    //    while (temp.top()[0] >= '0' and temp.top()[0] <= '9')
    //    {
    //        num += int(temp.top()[0]) * std::pow(10, level);
    //        level++;
    //        temp.pop();
    //    }
    //    return num;
    //}

    //std::string together(std::stack<std::string>& res)
    //{
    //    std::string result = "";
    //    while (!res.empty()) {
    //        result = res.top() + result;
    //        res.pop();
    //    }
    //    return result;
    //}
    // ��ֵ�ִ�д��󣬶�������ڴ��󵯳���Ԫ��




};