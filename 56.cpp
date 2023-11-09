



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


//这段代码似乎是在尝试合并给定的区间。有几个问题可能导致它无法按预期工作：
//
//1. * *错误的区间合并逻辑： * *在 `mergeCur` 函数中，处理区间合并的逻辑可能存在问题。可以考虑重新审视区间合并的条件和操作，例如检查条件语句以确保它们正确地合并区间。
//
//2. * *循环和删除元素： * *在 `merge` 函数中，你在遍历 `res` 的同时试图删除元素，这可能导致意外结果。在循环中修改正在迭代的容器通常会导致未定义的行为。在这里，可以考虑重新设计算法来正确合并区间，而不是尝试在循环中进行删除操作。
//
//3. * *结果向量的逻辑错误： * *在 `mergeCur` 中，结果向量似乎存在逻辑错误，导致未正确添加合并后的区间。
//
//建议对代码进行一些调整和修复。在修改代码之前，这里提供一些可以改进的点：
//
//- 首先，确保正确理解区间合并的条件和逻辑。
//- 避免在循环中修改正在迭代的容器。
//- 可以考虑重新审视区间合并的逻辑，重新实现合并区间的算法。
//
//如果你能提供代码的预期输入和输出，我可以帮你调试和改进代码，以便它能按预期工作。


// 丑陋的散装方法
// 必须重做
// 第二个方法也丑陋的很，我看官方题解是排序
// 必须重做