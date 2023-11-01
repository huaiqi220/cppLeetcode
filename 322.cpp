


#include "vector"

class Solution {
public:
    

    int coinChange(std::vector<int>& coins, int amount) {

    }

    // backtracking

    void backTracking(std::vector<int>& coins, int amount, int curIndex,int count, std::vector<int>& numsList)
    {
        if (count == amount)
        {
            return;
        }
        if (count < amount)
        {
            count += coins[curIndex];
            curIndex++;
            nums.push_back(curIndex);
            backTracking(coins, amount, curIndex, count, nums);
        }
    }
};