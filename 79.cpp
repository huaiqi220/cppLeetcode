
#include <vector>
#include <string>
#include <map>

class Solution {
public:
    //bool exist(std::vector<std::vector<char>>& board, std::string word) {
    //    char f = word.front();
    //    std::vector<std::pair<int, int>> startlocation;
    //    // path为标记路径矩阵，全0
    //    if (!lessComputed(word, board)) return false;

    //    for (int i = 0; i < board.size(); i++)
    //    {
    //        for (int j = 0; j < board[0].size(); j++)
    //        {
    //            if (board[i][j] == f) {
    //                startlocation.push_back(std::pair<int, int>(i, j));
    //            }
    //        }
    //    }
    //    // 第一个子母都找不到，显然不可能存在
    //    if (startlocation.empty()) return false;
    //    for (auto item : startlocation) {
    //        if (backTracking(word.size(), 0, item, word, board)) return true;
    //    }
    //    return false;
    //    
    //    

    //}
    //bool backTracking(int size, int curIndex, std::pair<int, int> curLocation, std::string& word, std::vector<std::vector<char>> board)
    //{
    //    if (curIndex == size)return true;

    //    char b = board[curLocation.first][curLocation.second];
    //    if (b == word[curIndex]) {
    //        // set path matrix
    //        char p = board[curLocation.first][curLocation.second];
    //        board[curLocation.first][curLocation.second] = '#';

    //        std::pair<int, int> top(curLocation.first - 1 >= 0 ? curLocation.first - 1 : 0, curLocation.second);
    //        std::pair<int, int> down(curLocation.first + 1 <= board.size() - 1 ? curLocation.first + 1 : board.size() - 1, curLocation.second);
    //        std::pair<int, int> left(curLocation.first , curLocation.second - 1 >= 0 ? curLocation.second - 1 : 0);
    //        std::pair<int, int> right(curLocation.first, curLocation.second + 1 <= board[0].size() - 1 ? curLocation.second + 1 : board[0].size() - 1);

    //        if (board[top.first][top.second] != '#') {
    //              if(backTracking(size, curIndex + 1, top,word,board)) return true;
    //        }
    //        if (board[down.first][down.second] != '#') {
    //            if(backTracking(size, curIndex + 1, down, word, board)) return true;
    //        }
    //        if (board[left.first][left.second] != '#') {
    //            if (backTracking(size, curIndex + 1, left, word, board)) return true;
    //        }
    //        if (board[right.first][right.second] != '#') {
    //            if (backTracking(size, curIndex + 1, right, word, board)) return true;
    //        }
    //        if (curIndex + 1 == size)return true;
    //        board[curLocation.first][curLocation.second] = p;

    //    }

    //    return false;

    //}


    //bool lessComputed(std::string word, std::vector<std::vector<char>>& board) {
    //    std::map<char, int> temp;
    //    for (auto i : word) {
    //        temp[i]++;
    //    }

    //    for (auto item : temp) {
    //        if (!findChar(item.first, board)) return false;
    //    }
    //    return true;


    //}

    //bool findChar(char item, std::vector<std::vector<char>>& board) {
    //    int num = 0;
    //    for (int i = 0; i < board.size(); i++)
    //    {
    //        for (int j = 0; j < board[0].size(); j++)
    //        {
    //            if (board[i][j] == item) {
    //                num++;
    //            }
    //        }
    //    }
    //    return num > 0;
    //}
    // 超时，从头开始写吧，一会再写

};


//[["A", "A", "A", "A", "A", "A"], ["A", "A", "A", "A", "A", "A"], ["A", "A", "A", "A", "A", "A"], ["A", "A", "A", "A", "A", "A"], ["A", "A", "A", "A", "A", "A"], ["A", "A", "A", "A", "A", "A"]]
//用回溯直接超时，要剪枝

//超时，我淦！

//[["A", "A", "A", "A", "A", "A"], ["A", "A", "A", "A", "A", "A"], ["A", "A", "A", "A", "A", "A"], ["A", "A", "A", "A", "A", "A"], ["A", "A", "A", "A", "A", "B"], ["A", "A", "A", "A", "B", "A"]]