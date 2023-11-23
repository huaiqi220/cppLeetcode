#include <vector>
#include <string>
#include <stack>




class Solution {
public:
    std::vector<std::string> generateParenthesis(int n) {
        std::string temp;
        std::vector<std::string> result;
        backTracking(n, n, temp, result);
        return result;
    }

    void backTracking(int lnum, int rnum, std::string& temp, std::vector<std::string>& result) {
        if (lnum == 0 and rnum == 0) {
            if(isValid(temp))result.push_back(temp);
            return;
        }
        if (lnum > 0) {
            temp.push_back('(');
            backTracking(lnum - 1, rnum, temp, result);
            temp.pop_back();
        }
        if (rnum > 0) {
            temp.push_back(')');
            backTracking(lnum, rnum - 1 , temp, result);
            temp.pop_back();
        }


    }

    bool isValid(std::string str1) {
        std::stack<char> temp;
        std::string::iterator be = str1.begin();
        std::string::iterator en = str1.end();
        while (be != en) {
            char item = *be;
            if (item == '(')
            {
                temp.push(item);
            }
            else if (item == ')' and temp.empty()) 
            {
                temp.push(item);
            }
            else if (item == ')' and temp.top() == ')')
            {
                temp.push(item);
            }
            else if (item == ')' and temp.top() == '(')
            {
                temp.pop();
            }
            be++;
        }
        if (temp.empty()) {
            return true;
        }
        return false;

    }
};