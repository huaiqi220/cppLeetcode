
#include <vector>
class Solution {
public:
    void reverseString(std::vector<char>& s) {
        char temp;
        int i = 0; int j = s.size() - 1;
        while (i<j)
        {
            temp = s[j];
            s[j] = s[i];
            s[i] = temp;
            i++; j--;
        }


    }
};