


#include <vector>
#include <string>
#include <unordered_map>

class Solution {
public:
    std::vector<std::string> letterCombinations(std::string digits) {
        std::vector<std::string> result;
        if (digits.size() == 0) return result;
        std::string res;
        backTracking(0, digits.size(), digits, res, result);
        return result;
    }

    void backTracking(int curIndex, int size, const std::string& digits, std::string& res, std::vector<std::string>& result) {
        if (curIndex == size) {
            result.push_back(res);
            return;
        }
        char a2[] = { 'a','b','c' };
        char a3[] = { 'd','e','f' };
        char a4[] = { 'g','h','i' };
        char a5[] = { 'j','k','l' };
        char a6[] = { 'm','n','o' };
        char a7[] = { 'p','q','r','s' };
        char a8[] = { 't','u','v' };
        char a9[] = { 'w','x','y','z' };
        int num = digits[curIndex] - '0';
        if (num == 2) {
            for (char* ptr = std::begin(a2); ptr != std::end(a2); ++ptr) {
                char item = *ptr;
                // 在这里使用item
                res.push_back(item);
                backTracking(curIndex + 1, size, digits, res, result);
                res.pop_back();


            }
            return;
        }
        if (num == 3) {
            for (char* ptr = std::begin(a3); ptr != std::end(a3); ++ptr) {
                char item = *ptr;
                // 在这里使用item
                res.push_back(item);
                backTracking(curIndex + 1, size, digits, res, result);
                res.pop_back();


            }
            return;
        }
        if (num == 4) {
            for (char* ptr = std::begin(a4); ptr != std::end(a4); ++ptr) {
                char item = *ptr;
                // 在这里使用item
                res.push_back(item);
                backTracking(curIndex + 1, size, digits, res, result);
                res.pop_back();


            }
            return;
        }
        if (num == 5) {
            for (char* ptr = std::begin(a5); ptr != std::end(a5); ++ptr) {
                char item = *ptr;
                // 在这里使用item
                res.push_back(item);
                backTracking(curIndex + 1, size, digits, res, result);
                res.pop_back();


            }
            return;
        }
        if (num == 6) {
            for (char* ptr = std::begin(a6); ptr != std::end(a6); ++ptr) {
                char item = *ptr;
                // 在这里使用item
                res.push_back(item);
                backTracking(curIndex + 1, size, digits, res, result);
                res.pop_back();


            }
            return;
        }
        if (num == 7) {
            for (char* ptr = std::begin(a7); ptr != std::end(a7); ++ptr) {
                char item = *ptr;
                // 在这里使用item
                res.push_back(item);
                backTracking(curIndex + 1, size, digits, res, result);
                res.pop_back();


            }
            return;
        }
        if (num == 8) {
            for (char* ptr = std::begin(a8); ptr != std::end(a8); ++ptr) {
                char item = *ptr;
                // 在这里使用item
                res.push_back(item);
                backTracking(curIndex + 1, size, digits, res, result);
                res.pop_back();


            }
            return;
        }
        if (num == 9) {
            for (char* ptr = std::begin(a9); ptr != std::end(a9); ++ptr) {
                char item = *ptr;
                // 在这里使用item
                res.push_back(item);
                backTracking(curIndex + 1, size, digits, res, result);
                res.pop_back();


            }
            return;
        }
    }
};

// 编码能力异常低下，舍近求远，代码臃肿
// 不是一个合格的C++程序员
//char mapping[][4] = {
//    {}, {}, {'a','b','c'}, {'d','e','f'}, {'g','h','i'},
//    {'j','k','l'}, {'m','n','o'}, {'p','q','r','s'},
//    {'t','u','v'}, {'w','x','y','z'}
//};
// 一个这个能解决的问题，又是std::vector<std::string>
// 又是auto item : temp ，
// 又是什么

//严重性	代码	说明	项目	文件	行	禁止显示状态
//错误(活动)	E0434	无法用 "std::string" 类型的值初始化 "std::vector<std::string, std::allocator<std::string>> &" 类型的引用(非常量限定)	cppLeetcode	C : \code\cppLeetcode\cppLeetcode\17.cpp	94
// 真不能懈怠啊，真得多练


//char a2[] = { 'a','b','c' };
//char a3[] = { 'd','e','f' };
//char a4[] = { 'g','h','i' };
//char a5[] = { 'j','k','l' };
//char a6[] = { 'm','n','o' };
//char a7[] = { 'p','q','r','s' };
//char a8[] = { 't','u','v' };
//char a9[] = { 'w','x','y','z' };
//
//if (curIndex == 2) {
//    while (auto item : a2)
//}为什么此处提示无法推导item类型



//在你的代码中，auto 无法正确推导 item 的类型，这是因为你使用了数组而不是 std::vector 或其他标准容器。在 C++ 中，使用 auto 推导数组元素的类型时会遇到问题，因为数组并不是一个真正的容器，而是一个固定大小的连续内存块。
//
//如果你想要使用范围 - based for 循环遍历数组，可以使用指针或者引用来代替 auto，如下所示：
//
//cpp
//Copy code
//char a2[] = { 'a', 'b', 'c' };
//
//if (curIndex == 2) {
//    for (char& item : a2) {
//        // 在这里使用item
//    }
//}
//请注意，使用 char& 可以确保 item 是一个引用，这样就可以修改数组中的元素。
//
//如果你只是想循环遍历数组，不需要修改元素，也可以使用指针：
//
//cpp
//Copy code
//char a2[] = { 'a', 'b', 'c' };
//
//if (curIndex == 2) {
//    for (char* ptr = std::begin(a2); ptr != std::end(a2); ++ptr) {
//        char item = *ptr;
//        // 在这里使用item
//    }
//}
//在这两种情况下，你都可以在循环体中使用 item 或* ptr 来访问数组的元素。

//
//User
//C++ auto关键字能推导哪些类型，我刚才想使用auto 推导chat a[]以及std::vector<std::string>均失败

//
//auto 关键字在 C++ 中用于自动推导变量的类型，但它有一些限制。auto 可以用于推导任何具有初始化表达式的局部变量的类型，包括数组和容器。然而，对于数组，auto 推导得到的类型通常是数组的指针类型。
//
//下面是一些示例：
//
//数组
//cpp
//Copy code
//#include <iostream>
//
//int main() {
//    char a[] = { 'a', 'b', 'c' };
//
//    // 推导为char*
//    auto ptr = a;
//
//    // 推导为const char*
//    const auto cptr = a;
//
//    // 输出
//    for (auto i : a) {
//        std::cout << i << " ";
//    }
//
//    return 0;
//}
//向量
//cpp
//Copy code
//#include <iostream>
//#include <vector>
//#include <string>
//
//int main() {
//    std::vector<std::string> vec = { "one", "two", "three" };
//
//    // 推导为std::vector<std::string>::iterator
//    auto it = vec.begin();
//
//    // 输出
//    for (const auto& str : vec) {
//        std::cout << str << " ";
//    }
//
//    return 0;
//}
//对于数组，使用 auto 推导的类型是指向数组元素的指针，而不是数组本身。对于 std::vector，auto 推导的类型是迭代器类型。
//
//如果你想要使用完整的数组类型或 std::vector 类型，可以使用 decltype 关键字：
//
//cpp
//Copy code
//#include <iostream>
//#include <vector>
//#include <string>
//
//int main() {
//    char a[] = { 'a', 'b', 'c' };
//    std::vector<std::string> vec = { "one", "two", "three" };
//
//    // 推导为char[3]
//    decltype(a) arrayType;
//
//    // 推导为std::vector<std::string>
//    decltype(vec) vectorType;
//
//    return 0;
//}
//这样就可以得到完整的数组类型或 std::vector 类型。

//#include <iostream>
//#include <vector>
//#include <string>
//
//int main() {
//    std::vector<std::string> vec = { "one", "two", "three" };
//
//    // 推导为std::vector<std::string>::iterator
//    auto it = vec.begin();
//
//    // 输出
//    for (const auto& str : vec) {
//        std::cout << str << " ";
//    }
//
//    return 0;
//}

//
//
//auto 关键字在 C++ 中用于自动推导变量的类型，但它有一些限制。auto 可以用于推导任何具有初始化表达式的局部变量的类型，包括数组和容器。然而，对于数组，auto 推导得到的类型通常是数组的指针类型。
//
//下面是一些示例：
// 数组
//#include <iostream>
//int main() {
//    char a[] = { 'a', 'b', 'c' };
//
//    // 推导为char*
//    auto ptr = a;
//
//    // 推导为const char*
//    const auto cptr = a;
//
//    // 输出
//    for (auto i : a) {
//        std::cout << i << " ";
//    }
//
//    return 0;
//}
//向量
//#include <iostream>
//#include <vector>
//#include <string>
//
//int main() {
//    std::vector<std::string> vec = { "one", "two", "three" };
//
//    // 推导为std::vector<std::string>::iterator
//    auto it = vec.begin();
//
//    // 输出
//    for (const auto& str : vec) {
//        std::cout << str << " ";
//    }
//
//    return 0;
//}
//对于数组，使用 auto 推导的类型是指向数组元素的指针，而不是数组本身。对于 std::vector，auto 推导的类型是迭代器类型。
//如果你想要使用完整的数组类型或 std::vector 类型，可以使用 decltype 关键字：
//Copy code
//#include <iostream>
//#include <vector>
//#include <string>
//
//int main() {
//    char a[] = { 'a', 'b', 'c' };
//    std::vector<std::string> vec = { "one", "two", "three" };
//
//    // 推导为char[3]
//    decltype(a) arrayType;
//
//    // 推导为std::vector<std::string>
//    decltype(vec) vectorType;
//
//    return 0;
//}
//这样就可以得到完整的数组类型或 std::vector 类型。