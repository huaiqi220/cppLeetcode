//#include <queue>
//
//#include <queue>
//#include <list>
//#include <stack>
//
//class MinStack_Method1 {
//public:
//    // ע��һ������ط���С�ѵ�������ʽ������������һ���������ͣ�һ���ײ�������һ���ȽϺ���
//    std::priority_queue<int, std::list<int>, std::greater<int>> pqueue;
//    std::vector<int> vec;
//    MinStack_Method1() {
//
//
//    }
//
//    void push(int val) {
//        this->pqueue.push(val);
//        this->vec.push_back(val);
//
//    }
//
//    void pop() {
//        // ���ַ�ʽPop̫��
//        int del = this->top();
//        vec.pop_back();
//        std::vector<int> temp;
//        while (pqueue.top() != del)
//        {
//            temp.push_back(pqueue.top());
//            pqueue.pop();
//        }
//        pqueue.pop();
//        for (auto item : temp)pqueue.push(item);
//
//    }
//
//    int top() {
//        return *(vec.end() - 1);
//    }
//
//    int getMin() {
//        return this->pqueue.top();
//    }
//};
//
//
//
//class MinStack {
//public:
//    std::stack<int> mains;
//    std::stack<int> mins;
//    MinStack() {
//
//    }
//
//    void push(int val) {
//        if (mains.empty()) {
//            mains.push(val);
//            mins.push(val);
//        }
//        else {
//            mains.push(val);
//            if (val < mins.top()) {
//                mins.push(val);
//            }
//            else {
//                mins.push(mins.top());
//            }
//        }
//
//    }
//
//    void pop() {
//        mins.pop();
//        mains.pop();
//    }
//
//    int top() {
//        return mains.top();
//    }
//
//    int getMin() {
//        return mins.top();
//    }
//};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */