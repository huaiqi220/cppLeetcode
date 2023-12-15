
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
    // ����д���͹��ˣ���rightָ���д���ڴ���ĳЩϸ��ʱ��ʹ���
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
    // ��������������û��debug��ԭ���ˣ������������ԭ��ǧ��ٹ֣�����һ���



};