


#include <vector>
#include <algorithm>



class Solution {
public:

    int candy(std::vector<int>& ratings) {
        std::vector<int> candy(ratings.size(), 1);
        for (int i = 1; i < ratings.size(); i++)
        {
            if (ratings[i] > ratings[i - 1])candy[i] = candy[i - 1] + 1;
        }

        for (int j = ratings.size() - 1; j >= 0; j--)
        {
            if (ratings[j - 1] > ratings[j])candy[j - 1] = std::max(candy[j - 1], candy[j] + 1);
        }

        int count(0);
        for (int i = 0; i < ratings.size(); i++)
        {
            count += candy[i];
        }
        return count;

    }
    // 两次优化的巧妙方法。

    //int candy(std::vector<int>& ratings) {
    //    // one child one  candy
    //    if (ratings.size() == 1) return 1;
    //    // else
    //    std::vector<int> num(ratings.size(),0);
    //    // relations用来记录元素关系，1 = 1 2 = left + 1 3 = right + 1 4 = max(left,right) + 1
    //    std::vector<int> relations(ratings.size(), 0);
    //    if (ratings[0] > ratings[1])relations[0] = 3;
    //    else relations[0] = 1;
    //    int end = ratings.size() - 1;
    //    if (relations[end] > relations[end - 1])relations[end] = 2;
    //    else relations[end] = 1;
    //    for (int index = 1; index < end - 1; index++) {
    //        int left = index - 1;
    //        int right = index + 1;
    //        if (ratings[index] <= ratings[left] and ratings[index] <= ratings[right]) {
    //            relations[index] = 1;
    //        }
    //        else if (ratings[index] >ratings[left] and ratings[index] <= ratings[right]) {
    //            relations[index] = 2;
    //        }
    //        else if (ratings[index] <= ratings[left] and ratings[index] > ratings[right]) {
    //            relations[index] = 3;
    //        }
    //        else if (ratings[index] > ratings[left] and ratings[index] > ratings[right]) {
    //            relations[index] = 4;
    //        }
    //    }
    //    //std::vector<std::pair<int, int>> temp;
    //    //for (int i = 0; i < ratings.size(); i++)
    //    //{
    //    //    temp.push_back(std::pair<int, int>(i, ratings[i]));
    //    //}

    //    //std::sort(temp.begin(), temp.end(), mysort);
    //    //for (auto item : temp) {
    //    //    int position = item.first;
    //    //    int mark = relations[position];
    //    //    if (mark == 1)num[position] = 1;
    //    //    if (mark == 2)num[position] = num[position - 1] + 1;
    //    //    if (mark == 3)num[position] = num[position + 1] + 1;
    //    //    if (mark == 4)num[position] = std::max(num[position - 1], num[position + 1]) + 1;
    //    //}
    //    int total = ratings.size();
    //    int position = 0;
    //    while (total > 0) {
    //        int mark = relations[position];
    //        if (mark == 1)num[position] = 1;
    //        if (mark == 2 and num[position - 1] != 0) { num[position] = num[position - 1] + 1; total--; }
    //        if (mark == 3 and num[position + 1] != 0) { num[position] = num[position + 1] + 1; total--; }
    //        if (mark == 4 and num[position + 1] != 0 and num[position - 1] != 0) { num[position] = std::max(num[position - 1], num[position + 1]) + 1; total--; }
    //        position = position + 1;
    //        if (position >= ratings.size()) {
    //            position = 0;
    //        }
    //    }

    //    int count = 0;
    //    for (int i = 0; i < ratings.size(); i++) {
    //        count += num[i];
    //    }
    //    return count;
    //    

    //}

    //static bool mysort(std::pair<int, int> p1, std::pair<int, int>p2) {
    //    return p1.second > p2.second;
    //}

    //int candy(std::vector<int>& ratings) {
    //    std::vector<int> num;
    //    for (int i = 0; i < ratings.size(); i++)
    //    {
    //        num.push_back(ratings[i] + 1);
    //        // 让0 分的孩子也能有一个糖果
    //    }

    //    // 评分就已经是一种可行的分配糖果方式
    //    // 再来调整高度，在可行的前提之下，把糖果尽可能地少

    //    std::vector<std::pair<int, int>> temp;
    //    for (int i = 0; i < ratings.size(); i++)
    //    {
    //        temp.push_back(std::pair<int, int>(i, num[i]));
    //    }

    //    std::sort(temp.begin(), temp.end(), mysort);

    //    // 从小数，就是sort之后的temP开始处理，每次比较其两边，处理这一个

    //    for (auto item : temp) {
    //        int index = item.first;
    //        int left = 0;
    //        int right = 0;
    //        if (index == 0) {
    //            right = 1;
    //            if (ratings[index] <= ratings[right]) {
    //                num[index] = 1;
    //            }
    //            else if (ratings[index] > ratings[right]) {
    //                num[index] = num[right] + 1;
    //            }

    //            continue;
    //        }
    //        if (index == temp.size() - 1) {
    //            left = index - 1;
    //            if (ratings[left] < ratings[index]) {
    //                num[index] = num[left] + 1;
    //            }
    //            else if (ratings[left] >= ratings[index]) {
    //                num[index] = 1;
    //            }

    //            continue;
    //        }
    //        left = index - 1;
    //        right = index + 1;

    //        while (ratings[left] == ratings[index]) { left = left - 1 >= 0 ? left - 1 : 0; if (left == 0)break; }
    //        while (ratings[index] == ratings[right]) { right = right + 1 <= temp.size() - 1 ? right + 1 : temp.size() - 1; if (right == temp.size() - 1) break; }

    //        if (ratings[index] > ratings[left] and ratings[index] > ratings[right]) {
    //            setNum(left, right, num, std::max(num[left], num[right]) + 1);
    //        }
    //        else if (ratings[index] < ratings[left] and ratings[index] < ratings[right]) {
    //            setNum(left, right, num,  1);
    //        }
    //        else if (ratings[index] > ratings[left] and ratings[index] < ratings[right]) {
    //            setNum(left, right, num, num[left] + 1);
    //        }
    //        else if (ratings[index] > ratings[left] and ratings[index] > ratings[right]) {
    //            setNum(left, right, num, num[right] + 1);
    //        }

    //    }

    //    int count = 0;
    //    for (auto item : num) {
    //        count += item;
    //    }

    //    return count;

    //    

    //}

    //static bool mysort(std::pair<int, int> p1, std::pair<int, int>p2) {
    //    return p1.second > p2.second;
    //}

    //void setNum(int left, int right, std::vector<int>& num,int val) {
    //    for (int i = left + 1; i < right; i++) {
    //        num[i] = val;
    //    }
    //}
};


//
//class Solution {
//public:
    //int candy(std::vector<int>& ratings) {
    //    std::vector<int> num;
    //    for (int i = 0; i < ratings.size(); i++)
    //    {
    //        num.push_back(1);
    //        // 让0 分的孩子也能有一个糖果
    //    }

    //    // 评分就已经是一种可行的分配糖果方式
    //    // 再来调整高度，在可行的前提之下，把糖果尽可能地少

    //    std::vector<std::pair<int, int>> temp;
    //    for (int i = 0; i < ratings.size(); i++)
    //    {
    //        temp.push_back(std::pair<int, int>(i, ratings[i]));
    //    }

    //    std::sort(temp.begin(), temp.end(), mysort);

    //    // 从小数，就是sort之后的temP开始处理，每次比较其两边，处理这一个

    //    for (auto item : temp) {
    //        int index = item.first;
    //        int left = 0;
    //        int right = 0;
    //        if (index == 0) {
    //            right = 1;
    //            if (ratings[index] <= ratings[right]) {
    //                num[index] = 1;
    //            }
    //            else if (ratings[index] > ratings[right]) {
    //                num[index] = num[right] + 1;
    //            }

    //            continue;
    //        }
    //        if (index == temp.size() - 1) {
    //            left = index - 1;
    //            if (ratings[left] < ratings[index]) {
    //                num[index] = num[left] + 1;
    //            }
    //            else if (ratings[left] >= ratings[index]) {
    //                num[index] = 1;
    //            }

    //            continue;
    //        }
    //        left = index - 1;
    //        right = index + 1;

    //        while (ratings[left] == ratings[index]) { left = left - 1 >= 1 ? left - 1 : 1; if (left == 1)break; }
    //        while (ratings[index] == ratings[right]) { right = right + 1 <= temp.size() - 2 ? right + 1 : temp.size() - 2; if (right == temp.size() - 2) break; }

    //        if (ratings[index] > ratings[left] and ratings[index] > ratings[right]) {
    //            setNum(left, right, num, std::max(num[left], num[right]) + 1);
    //        }
    //        else if (ratings[index] < ratings[left] and ratings[index] < ratings[right]) {
    //            setNum(left, right, num, 1);
    //        }
    //        else if (ratings[index] > ratings[left] and ratings[index] < ratings[right]) {
    //            setNum(left, right, num, num[left] + 1);
    //        }
    //        else if (ratings[index] > ratings[left] and ratings[index] > ratings[right]) {
    //            setNum(left, right, num, num[right] + 1);
    //        }

    //    }

    //    int count = 0;
    //    for (auto item : num) {
    //        count += item;
    //    }

    //    return count;



    //}

    //static bool mysort(std::pair<int, int> p1, std::pair<int, int>p2) {
    //    return p1.second > p2.second;
    //}

    //void setNum(int left, int right, std::vector<int>& num, int val) {
    //    for (int i = left + 1; i < right; i++) {
    //        num[i] = val;
    //    }
    //}
    // 思路错误了啊，明天看解析吧。


    //int candy(vector<int>& ratings) {

    //}
//};
//
