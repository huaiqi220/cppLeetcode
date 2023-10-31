
#include "stack"
#include "vector"
#include "string"


class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> tempStack;
        for (auto item : s)
        {
            if (tempStack.empty())
            {
                tempStack.push(item);
                continue;
            }
            if ((tempStack.top() == '(' and item == ')') or (tempStack.top() == '[' and item == ']') or (tempStack.top() == '{' and item == '}'))
            {
                tempStack.pop();
            }
            else
            {
                tempStack.push(item);
            }
        }
        if (tempStack.empty())
        {
            return true;
        }
        return false;
    }

};

// finished