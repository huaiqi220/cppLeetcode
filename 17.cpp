


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
                // ������ʹ��item
                res.push_back(item);
                backTracking(curIndex + 1, size, digits, res, result);
                res.pop_back();


            }
            return;
        }
        if (num == 3) {
            for (char* ptr = std::begin(a3); ptr != std::end(a3); ++ptr) {
                char item = *ptr;
                // ������ʹ��item
                res.push_back(item);
                backTracking(curIndex + 1, size, digits, res, result);
                res.pop_back();


            }
            return;
        }
        if (num == 4) {
            for (char* ptr = std::begin(a4); ptr != std::end(a4); ++ptr) {
                char item = *ptr;
                // ������ʹ��item
                res.push_back(item);
                backTracking(curIndex + 1, size, digits, res, result);
                res.pop_back();


            }
            return;
        }
        if (num == 5) {
            for (char* ptr = std::begin(a5); ptr != std::end(a5); ++ptr) {
                char item = *ptr;
                // ������ʹ��item
                res.push_back(item);
                backTracking(curIndex + 1, size, digits, res, result);
                res.pop_back();


            }
            return;
        }
        if (num == 6) {
            for (char* ptr = std::begin(a6); ptr != std::end(a6); ++ptr) {
                char item = *ptr;
                // ������ʹ��item
                res.push_back(item);
                backTracking(curIndex + 1, size, digits, res, result);
                res.pop_back();


            }
            return;
        }
        if (num == 7) {
            for (char* ptr = std::begin(a7); ptr != std::end(a7); ++ptr) {
                char item = *ptr;
                // ������ʹ��item
                res.push_back(item);
                backTracking(curIndex + 1, size, digits, res, result);
                res.pop_back();


            }
            return;
        }
        if (num == 8) {
            for (char* ptr = std::begin(a8); ptr != std::end(a8); ++ptr) {
                char item = *ptr;
                // ������ʹ��item
                res.push_back(item);
                backTracking(curIndex + 1, size, digits, res, result);
                res.pop_back();


            }
            return;
        }
        if (num == 9) {
            for (char* ptr = std::begin(a9); ptr != std::end(a9); ++ptr) {
                char item = *ptr;
                // ������ʹ��item
                res.push_back(item);
                backTracking(curIndex + 1, size, digits, res, result);
                res.pop_back();


            }
            return;
        }
    }
};

// ���������쳣���£������Զ������ӷ��
// ����һ���ϸ��C++����Ա
//char mapping[][4] = {
//    {}, {}, {'a','b','c'}, {'d','e','f'}, {'g','h','i'},
//    {'j','k','l'}, {'m','n','o'}, {'p','q','r','s'},
//    {'t','u','v'}, {'w','x','y','z'}
//};
// һ������ܽ�������⣬����std::vector<std::string>
// ����auto item : temp ��
// ����ʲô

//������	����	˵��	��Ŀ	�ļ�	��	��ֹ��ʾ״̬
//����(�)	E0434	�޷��� "std::string" ���͵�ֵ��ʼ�� "std::vector<std::string, std::allocator<std::string>> &" ���͵�����(�ǳ����޶�)	cppLeetcode	C : \code\cppLeetcode\cppLeetcode\17.cpp	94
// �治��и��������ö���


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
//}Ϊʲô�˴���ʾ�޷��Ƶ�item����



//����Ĵ����У�auto �޷���ȷ�Ƶ� item �����ͣ�������Ϊ��ʹ������������� std::vector ��������׼�������� C++ �У�ʹ�� auto �Ƶ�����Ԫ�ص�����ʱ���������⣬��Ϊ���鲢����һ������������������һ���̶���С�������ڴ�顣
//
//�������Ҫʹ�÷�Χ - based for ѭ���������飬����ʹ��ָ��������������� auto��������ʾ��
//
//cpp
//Copy code
//char a2[] = { 'a', 'b', 'c' };
//
//if (curIndex == 2) {
//    for (char& item : a2) {
//        // ������ʹ��item
//    }
//}
//��ע�⣬ʹ�� char& ����ȷ�� item ��һ�����ã������Ϳ����޸������е�Ԫ�ء�
//
//�����ֻ����ѭ���������飬����Ҫ�޸�Ԫ�أ�Ҳ����ʹ��ָ�룺
//
//cpp
//Copy code
//char a2[] = { 'a', 'b', 'c' };
//
//if (curIndex == 2) {
//    for (char* ptr = std::begin(a2); ptr != std::end(a2); ++ptr) {
//        char item = *ptr;
//        // ������ʹ��item
//    }
//}
//������������£��㶼������ѭ������ʹ�� item ��* ptr �����������Ԫ�ء�

//
//User
//C++ auto�ؼ������Ƶ���Щ���ͣ��Ҹղ���ʹ��auto �Ƶ�chat a[]�Լ�std::vector<std::string>��ʧ��

//
//auto �ؼ����� C++ �������Զ��Ƶ����������ͣ�������һЩ���ơ�auto ���������Ƶ��κξ��г�ʼ�����ʽ�ľֲ����������ͣ����������������Ȼ�����������飬auto �Ƶ��õ�������ͨ���������ָ�����͡�
//
//������һЩʾ����
//
//����
//cpp
//Copy code
//#include <iostream>
//
//int main() {
//    char a[] = { 'a', 'b', 'c' };
//
//    // �Ƶ�Ϊchar*
//    auto ptr = a;
//
//    // �Ƶ�Ϊconst char*
//    const auto cptr = a;
//
//    // ���
//    for (auto i : a) {
//        std::cout << i << " ";
//    }
//
//    return 0;
//}
//����
//cpp
//Copy code
//#include <iostream>
//#include <vector>
//#include <string>
//
//int main() {
//    std::vector<std::string> vec = { "one", "two", "three" };
//
//    // �Ƶ�Ϊstd::vector<std::string>::iterator
//    auto it = vec.begin();
//
//    // ���
//    for (const auto& str : vec) {
//        std::cout << str << " ";
//    }
//
//    return 0;
//}
//�������飬ʹ�� auto �Ƶ���������ָ������Ԫ�ص�ָ�룬���������鱾������ std::vector��auto �Ƶ��������ǵ��������͡�
//
//�������Ҫʹ���������������ͻ� std::vector ���ͣ�����ʹ�� decltype �ؼ��֣�
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
//    // �Ƶ�Ϊchar[3]
//    decltype(a) arrayType;
//
//    // �Ƶ�Ϊstd::vector<std::string>
//    decltype(vec) vectorType;
//
//    return 0;
//}
//�����Ϳ��Եõ��������������ͻ� std::vector ���͡�

//#include <iostream>
//#include <vector>
//#include <string>
//
//int main() {
//    std::vector<std::string> vec = { "one", "two", "three" };
//
//    // �Ƶ�Ϊstd::vector<std::string>::iterator
//    auto it = vec.begin();
//
//    // ���
//    for (const auto& str : vec) {
//        std::cout << str << " ";
//    }
//
//    return 0;
//}

//
//
//auto �ؼ����� C++ �������Զ��Ƶ����������ͣ�������һЩ���ơ�auto ���������Ƶ��κξ��г�ʼ�����ʽ�ľֲ����������ͣ����������������Ȼ�����������飬auto �Ƶ��õ�������ͨ���������ָ�����͡�
//
//������һЩʾ����
// ����
//#include <iostream>
//int main() {
//    char a[] = { 'a', 'b', 'c' };
//
//    // �Ƶ�Ϊchar*
//    auto ptr = a;
//
//    // �Ƶ�Ϊconst char*
//    const auto cptr = a;
//
//    // ���
//    for (auto i : a) {
//        std::cout << i << " ";
//    }
//
//    return 0;
//}
//����
//#include <iostream>
//#include <vector>
//#include <string>
//
//int main() {
//    std::vector<std::string> vec = { "one", "two", "three" };
//
//    // �Ƶ�Ϊstd::vector<std::string>::iterator
//    auto it = vec.begin();
//
//    // ���
//    for (const auto& str : vec) {
//        std::cout << str << " ";
//    }
//
//    return 0;
//}
//�������飬ʹ�� auto �Ƶ���������ָ������Ԫ�ص�ָ�룬���������鱾������ std::vector��auto �Ƶ��������ǵ��������͡�
//�������Ҫʹ���������������ͻ� std::vector ���ͣ�����ʹ�� decltype �ؼ��֣�
//Copy code
//#include <iostream>
//#include <vector>
//#include <string>
//
//int main() {
//    char a[] = { 'a', 'b', 'c' };
//    std::vector<std::string> vec = { "one", "two", "three" };
//
//    // �Ƶ�Ϊchar[3]
//    decltype(a) arrayType;
//
//    // �Ƶ�Ϊstd::vector<std::string>
//    decltype(vec) vectorType;
//
//    return 0;
//}
//�����Ϳ��Եõ��������������ͻ� std::vector ���͡�