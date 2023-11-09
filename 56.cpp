



#include "vector"


class Solution {
public:
    //std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
    //    std::vector<int> num(20002, 0);
    //    for (auto item : intervals)
    //    {
    //        for (int i = item[0] * 2; i <= item[1] * 2; i++)
    //        {
    //            num[i] = 1;
    //        }
    //    }
    //    num[20001] = 0;


    //    std::vector<std::vector<int>> res;
    //    int j = 0;
    //    int start_index = 0;
    //    bool mark = false;
    //    int end_index = 0;
    //    while (j <= 20001)
    //    {
    //        if (num[j] == 1 and mark == false)
    //        {
    //            start_index = j;
    //            mark = !mark;
    //        }

    //        if (num[j] == 0 and mark == true)
    //        {
    //            std::vector<int> item{ start_index / 2,(j - 1) / 2 };
    //            res.push_back(item);
    //            start_index = 0;
    //            mark = !mark;
    //        }
    //        j++;
    //    }
    //    return res;

    //}

    //-----------------------------------------------------------------------------------------------------------------------
    //std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
    //    std::vector<std::vector<int>> res;
    //    res.push_back(intervals[0]);

    //    for (auto item : intervals)
    //    {
    //        for (int i = 0; i < res.size();i++)
    //        {
    //            res.erase(res.begin() + i);
    //            auto temp = mergeCur(res[i], item);
    //            for (auto it : temp)
    //            {
    //                res.push_back(it);
    //            }

    //        }
    //    }

    //    return res;

    //}

    //std::vector<std::vector<int>> mergeCur(std::vector<int> p1, std::vector<int> p2)
    //{
    //    std::vector<std::vector<int>> res;
    //    if (p1.size() == 0)
    //    {
    //        res.push_back(p1);
    //        return res;
    //    }

    //    if (p2.size() == 0)
    //    {
    //        res.push_back(p2);
    //        return res;
    //    }

    //    if (p1[0] > p2[1] or p2[0] > p1[1])
    //    {
    //        std::vector<int> item1({ p1[0],p1[1] });
    //        res.push_back(item1);
    //        std::vector<int> item2({ p2[0],p2[1] });
    //        res.push_back(item2);
    //        return res;
    //    }

    //    if (p2[0] == p1[1])
    //    {
    //        std::vector<int> item2({ p1[0],p2[1] });
    //        res.push_back(item2);
    //        return res;
    //    }

    //    if (p1[0] == p2[1])
    //    {
    //        std::vector<int> item2({ p2[0],p1[1] });
    //        res.push_back(item2);
    //        return res;
    //    }
    //    std::vector<int> item2({ std::min(p1[0],p2[0]),std::max(p1[1],p2[1])});
    //    res.push_back(item2);
    //    return res;

    //}

};


// 丑陋的散装方法
// 必须重做
// 第二个方法也丑陋的很，我看官方题解是排序
// 必须重做