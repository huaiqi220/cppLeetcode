


#include "vector"
#include "queue"


class Solution {
public:
    int findChampion(int n, std::vector<std::vector<int>>& edges) {
        std::vector<int> winNum;
        int m = edges.size();


        std::vector<std::vector<int>> graphMarix;
        for (int i = 0; i < n; i++)
        {
            std::vector<int> item(n, 0);
            graphMarix.push_back(item);
        }

        for (int i = 0; i < m; i++)
        {
            std::vector<int> item = edges[i];
            graphMarix[item[1]][item[0]] = 1;
        }
        
        
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (auto item : graphMarix[i])
            {
                if (item != 0) count++;
            }
            if(count == n) winNum.push_back(i);  

        }

        if (winNum.size() == 1)
        {
            return winNum[0];
        }

        return -1;


    }
};