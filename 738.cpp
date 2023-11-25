



#include <vector>
#include <algorithm>

class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        std::vector<int> temp;
        while (n  != 0) {
            temp.push_back(n % 10);
            n = n / 10;
        }
        if (temp.size() == 1)return n;
        int i = 0;
        int j = 1;
        while (j <= temp.size() - 1) {
            if (temp[i] >= temp[j]) {
                i++;
                j++;
            }
            else {
                for (int k = 0; k <= i; k++) temp[k] = 9;
                temp[j] = temp[j] - 1;

            }
        }
        
    }
};