
#include <vector>

class Solution {
public:
    /*long long countSubarrays(std::vector<int>& nums, int k) {
        long long ans = 0;
        int left = 0;
        int right = 0;
        int curCount = 0;
        int maxElement = *max_element(nums.begin(), nums.end());
        while (right < nums.size()) {
            if (nums[right] == maxElement) {
                curCount++;
                if (curCount == k) {
                    while (nums[left] != maxElement) {
                        ans++;
                        left++;
                    }
                    curCount--;
                    right--;
                    ans++;

                }
            }
            right++;
        }
        return ans;


    }*/
    long long countSubarrays(std::vector<int>& nums, int k) {
        long long ans = 0;
        int left = 0;
        int right = 0;
        int curCount = 0;
        int maxElement = *max_element(nums.begin(), nums.end());
        for (auto item : nums) {
            curCount += item == maxElement;
            while (curCount >= k) {
                curCount -= nums[left] == maxElement;
                left++;
            }
            ans += left;

        }
        return ans;


    }
    // 这种写法就过了，用right指针的写法在处理某些细节时候就错误
  /*  long long countSubarrays(std::vector<int>& nums, int k) {
        long long ans = 0;
        int left = 0;
        int right = 0;
        int curCount = 0;
        int maxElement = *max_element(nums.begin(), nums.end());
        while (right < nums.size()) {
            if (nums[right] == maxElement) {
                curCount++;
                while (curCount >= k) {
                    if (nums[left] == maxElement)curCount--;
                    left++;
                }
                ans += left;

            }
            right++;
        }
        return ans;


    }*/
    // 部分用例解答错误，没空debug找原因了，垃圾代码出错原因千奇百怪，做下一题把



};