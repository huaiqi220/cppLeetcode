
#include <string>
#include <stack>
#include <cmath>

class Solution {
public:




    
    //写太复杂了，直接抄答案吧
    //std::string decodeString(std::string s) {
    //    std::stack<int> numStack;
    //    std::stack<char> markStack;
    //    std::stack<std::string> strStack;
    //    std::string numTemp;
    //    std::string strTemp;
    //    for (auto item : s) {
    //        if (item >= '0' and item <= '9') {
    //            if (!strTemp.empty()) {
    //                strStack.push(strTemp);
    //                strTemp.clear();
    //            }
    //            numTemp.push_back(item);
    //            continue;
    //        }
    //        if (item == '[') { numStack.push(str2int(numTemp)); numTemp.clear(); markStack.push('['); continue; }
    //        if (item >= 'a' and item <= 'z') { strTemp.push_back(item); continue; }
    //        if (item == ']') {
    //            if (!strTemp.empty()) {
    //                strStack.push(strTemp);
    //                strTemp.clear();
    //            }
    //            if (markStack.top() == '[') {
    //                std::string xstr = strStack.top(); 
    //                for (int i = 0; i < numStack.top(); i++) {
    //                    xstr += strStack.top();
    //                }
    //                strStack.pop();
    //                numStack.pop();
    //                markStack.pop();
    //                strStack.push(xstr);
    //            }
    //            continue;
    //        }
    //    }
    //    std::string res;
    //    res += strTemp;
    //    while (!strStack.empty()) { res = strStack.top() + res; strStack.pop(); }

    //    return res;

    //}
    //
    //int str2int(std::string str1)
    //{
    //    int count = 0;
    //    for (int i = str1.size() - 1; i >= 0; i--) {
    //        count += (str1[i] - '0') * std::pow(10, i);
    //    }
    //    return count;
    //}

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
    // 思路错了，完全不考虑，[]里面有[]的情况




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
    // 奇怪的执行错误，多半是由于错误弹出了元素




};