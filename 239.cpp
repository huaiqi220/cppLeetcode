
#include <vector>

#include <queue>



class Solution {
    
public:
    //std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
    //    std::queue<int> temp;
    //    int globalMax = 0;
    //    int curMax = 0;
    //    for (int i = 0; i < k; i++)
    //    {
    //        temp.push(nums[i]);
    //        curMax += nums[i];
    //    }
    //    globalMax = curMax;

    //    for (int j = k; j < nums.size(); j++) {
    //        int f = temp.front();
    //        temp.pop();
    //        temp.push(nums[j]);
    //        int end = nums[j];
    //        curMax = curMax - f + end;
    //        if (curMax > globalMax) globalMax = curMax;
    //    }
    //    return globalMax;

    //}
    // ��Ŀ�������ι��������
    //---------------------------------------------------------------

    //std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
    //    std::queue<int> temp;
    //    std::vector<int> kmax;
    //    int tempMax = -10000;
    //    for (int i = 0; i < k; i++)
    //    {
    //        temp.push(nums[i]);
    //        if (nums[i] > tempMax) tempMax = nums[i];
    //    }
    //    kmax.push_back(tempMax);

    //    for (int j = k; j < nums.size(); j++)
    //    {
    //        int f = temp.front();
    //        int e = nums[j];

    //        if (e >= tempMax)
    //        {
    //            kmax.push_back(e);
    //            tempMax = e;
    //            temp.push(e);
    //            temp.pop();
    //        }
    //        else if (e < tempMax and f < tempMax) {
    //            // ���û��ջ
    //            kmax.push_back(tempMax);
    //            temp.push(e);
    //            temp.pop();;
    //        }
    //        else if (e < tempMax and f == tempMax) {
    //            //���ı���ջ�ˣ������ı����С��ð��һ��
    //            temp.push(e);
    //            temp.pop();
    //            tempMax = findMax(temp);
    //            kmax.push_back(tempMax);

    //        }

    //    }

    //    return kmax;

    //}

    //int findMax(std::queue<int> queue) {
    //    int max = -10000;
    //    while (!queue.empty()) {
    //        if (queue.front() > max) {
    //            max = queue.front();
    //        }
    //        queue.pop();
    //    }
    //    return max;
    //}

    // ��ʱ
    //---------------------------------------------------------------

    //std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
    //    // ��������
    //    std::queue<int> temp;
    //    std::vector<int> orderdVec;
    //    std::vector<int> kmax;
    //    for (int i = 0; i < k; i++)
    //    {
    //        temp.push(nums[i]);
    //        addItem(orderdVec, nums[i]);

    //    }
    //    kmax.push_back(orderdVec.back());
    //    for (int j = k; j < nums.size(); j++) {
    //        int f = temp.front();
    //        temp.pop();
    //        int e = nums[j];
    //        temp.push(e);
    //        findRemove(orderdVec, f);
    //        addItem(orderdVec, e);
    //        kmax.push_back(orderdVec.back());

    //    }
    //    return kmax;
    //}


    //void addItem(std::vector<int>& orderdVec, int item) {
    //    if (orderdVec.empty() || item <= orderdVec.front()) {
    //        orderdVec.insert(orderdVec.begin(), item);
    //        return;
    //    }

    //    std::vector<int>::iterator it = orderdVec.begin();
    //    while (it != orderdVec.end()) {
    //        if (*it > item) {
    //            orderdVec.insert(it, item);
    //            return;
    //        }
    //        ++it;
    //    }
    //    orderdVec.push_back(item); // ���item�����ģ������ĩβ
    //}


    //void findRemove(std::vector<int>& orderdVec, int item) {
    //    std::vector<int>::iterator beg = orderdVec.begin();
    //    std::vector<int>::iterator en = orderdVec.end();
    //    while (beg != en)
    //    {
    //        if (item == *beg) {
    //            orderdVec.erase(beg);
    //            return;
    //        }
    //        beg++;
    //    }

    //}


    // ��ʱ
    //---------------------------------------------------------------

    // ûʲô��˵�ģ�C++��д��ʱ��ֻ��˵��������


    std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
        std::priority_queue<std::pair<int, int>> q;
        std::vector<int> kmax;
        for (int i = 0; i < k; i++)
        {
            q.emplace(std::pair<int, int>(nums[i], i));
        }
        kmax.push_back(q.top().first);

        for (int j = k; j < nums.size(); j++)
        {
            q.emplace(std::pair<int, int>(nums[j], j));
            while(q.top().second <= j - k) {
                q.pop();
            }
            kmax.push_back(q.top().first);
        }
        return kmax;


    }

};