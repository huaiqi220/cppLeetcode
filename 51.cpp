
#include <vector>
#include <algorithm>
#include <string>
#include "cmath"


class Solution {
public:


    std::vector<std::vector<std::vector<int>>> Result;
    std::vector<std::vector<std::string>> solveNQueens(int n) {
        std::vector<std::vector<int>> QueneList;
        backtracking(QueneList, 0, n);
        return output(Result, n);



    }

    bool canPlace(std::vector<std::vector<int>> QueneList, std::vector<int> newQuene)
    {
        for (auto Quene : QueneList)
        {
            int i = Quene[0];
            int j = Quene[1];

            int iq = newQuene[0];
            int jq = newQuene[1];

            if (i == iq or j == jq)
            {
                return false;
            }

            if (std::abs(i - iq) == std::abs(j - jq))
            {
                return false;
            }

        }
        return true;
    }

    void backtracking(std::vector<std::vector<int>> QueneList, int level,int n)
    {
        if (level == n)
        {
            Result.push_back(QueneList);
        }

        //人为规定从第一行扫描至第n行
        for (int j = 0; j < n; j++)
        {
            std::vector<int> Quene;
            Quene.push_back(level);
            Quene.push_back(j);
            if (canPlace(QueneList, Quene))
            {
                std::vector<std::vector<int>> curQueneList = QueneList;
                curQueneList.push_back(Quene);
                backtracking(curQueneList, level + 1, n);
            }
        }
    }

    std::vector<std::vector<std::string>> output(std::vector<std::vector<std::vector<int>>> Result,int n)
    {
        std::vector<std::vector<std::string>> oup;
        for (auto item : Result)
        {
            //取出点列
            std::string rec = "";
            for (int i = 0; i < n; i++) {
                rec += ".";
            }
            std::vector<std::string> box(n,rec);

            for (auto Quene : item)
            {
                box[Quene[0]][Quene[1]] = 'Q';
            }
            oup.push_back(box);
            

        }
        return oup;
    }


};

//
//int main()
//{
//
//    Solution solution;
//    solution.solveNQueens(4);
//
//
//}