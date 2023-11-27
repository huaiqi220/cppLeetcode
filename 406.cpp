

#include <vector>
#include <algorithm>
#include <cmath>

class Solution {
public:
    std::vector<std::vector<int>> reconstructQueue(std::vector<std::vector<int>>& people) {
        std::sort(people.begin(), people.end(), better);
        std::vector<std::vector<int>> queue;
        for (int j = people.size() - 1; j >= 0; j--)
        {
            int num = people[j][0];
            int prep = people[j][1];
            moveTo(people, j, j + prep);
        }
        for (auto item : people) {
            queue.push_back(item);
        }
        return queue;
        
    }

    static bool better(std::vector<int> p1,std::vector<int> p2)
    {
        if (p1[0] > p2[0]) {
            return true;
        }
        else if (p1[0] == p2[0]) {
            return p1[1] < p2[1];
        }
        else if (p1[0] < p2[0]) {
            return false;
        }
    }

    void moveTo(std::vector<std::vector<int>>& people, int index, int to) {
        std::vector<int> cur = people[index];
        for (int i = index; i <= to - 1; i++) {
            people[i] = people[i + 1];
        }
        people[to] = cur;
    }
};

// ˼·�ǶԵģ�����BugҪ�ޣ�Ŀǰ��heap out of buffer
// �п��������ɣ������㷨��������