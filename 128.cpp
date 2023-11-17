



#include <algorithm>
#include <vector>
class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        if (nums.size() == 0 || nums.size() == 1) return nums.size();
        int max_len = 0;
        int s = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1)
            {
                s++;
            }
            else {
                int cur_length = i - s;
                if (cur_length > max_len) {
                    max_len = cur_length;
                    s = i;
                }
            }
        }
        return max_len;
    }
};