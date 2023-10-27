

#include "vector"
#include "algorithm"
#include "tuple"


//class Solution {
//public:
//    int orangesRotting(std::vector<std::vector<int>>& grid) {
//        std::vector<std::vector<int>> bad;
//        std::vector<std::vector<int>> good;
//
//        for (int i = 0; i < grid.size(); i++)
//        {
//            for (int j = 0; j < grid[0].size(); j++)
//            {
//                std::vector<int> point;
//                point.push_back(i);
//                point.push_back(j);
//                if (grid[i][j] == 2)
//                {
//                    bad.push_back(point);
//                }
//                if (grid[i][j] == 1)
//                {
//                    good.push_back(point);
//                }
//            }
//        }
//
//        if (good.empty())
//        {
//            return 0;
//        }
//
//
//        int time = 0;
//        int good_num = good.size();
//        while (true)
//        {
//            std::vector<std::vector<int>> waitlist;
//            
//            for (auto item : bad)
//            {
//                int i = item[0];
//                int j = item[1];
//                std::vector<int> leftp;
//                leftp.push_back(i - 1);
//                leftp.push_back(j);
//                std::vector<int> rightp;
//                rightp.push_back(i + 1);
//                rightp.push_back(j);
//                std::vector<int> upp;
//                upp.push_back(i);
//                upp.push_back(j - 1);
//                std::vector<int> downp;
//                downp.push_back(i);
//                downp.push_back(j + 1);
//
//                
//                if (std::find(bad.begin(), bad.end(), leftp) == bad.end())
//                {
//                    waitlist.push_back(leftp);
//                }
//                if (std::find(bad.begin(), bad.end(), rightp) == bad.end())
//                {
//                    waitlist.push_back(rightp);
//                }
//                if (std::find(bad.begin(), bad.end(), upp) == bad.end())
//                {
//                    waitlist.push_back(upp);
//                }
//                if (std::find(bad.begin(), bad.end(), downp) == bad.end())
//                {
//                    waitlist.push_back(downp);
//                }
//
//            }
//            for (auto item : waitlist)
//            {
//                auto it = std::find(good.begin(), good.end(), item);
//                if ( it != good.end())
//                {
//                    good.erase(it);
//                    bad.push_back(item);
//
//                }
//            }
//            time++;
//            if (good.size() == good_num)
//            {
//                return -1;
//            }
//            else
//            {
//                good_num = good.size();
//            }
//            if (good.empty()) {
//                return time;
//            }
//        }
//
//
//    }
//};

