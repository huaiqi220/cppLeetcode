#include <vector>


class Solution {
public:
    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        std::vector<std::vector<int>> res;
        std::vector<int> item;
        combinationSum(res, candidates, target, 0, item);

        return res;
    }
    void combinationSum(std::vector<std::vector<int>>& res, std::vector<int>& candidates, int target, int idx, std::vector<int>& item) {
        if (target < 0 or idx > candidates.size() -1) return;
        if (target == 0) { res.push_back(item); return; }
        item.push_back(candidates[idx]);
        combinationSum(res, candidates, target - candidates[idx], idx, item);
        item.pop_back();

        combinationSum(res, candidates, target, idx + 1, item);
        return;
    }
};

  /*   ������ʵд����ûʲô�ѵģ���������һ��ʼ�Ļ���˼·����
     ˵������˼·����̫ǳ�ԣ�����λ

     �Ҽƻ�ֱ��for(item : candidates)�����ַ�����Ȼ������������ϣ������ַ����Ľ�������У��������
     ��ϲ����Ⱥ�˳��
     �ڴ˷ǳ�����ķ������Ǹ�һ��idx���޶���ѡ�±귶Χ��һ��idx++���������ϲ����ܳ���ǰ���ֵ���Ӷ�ֱ���ų����ظ��Ŀ�����*/