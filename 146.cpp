


//请你设计并实现一个满足  LRU(最近最少使用) 缓存 约束的数据结构。
//实现 LRUCache 类：
//LRUCache(int capacity) 以 正整数 作为容量 capacity 初始化 LRU 缓存
//int get(int key) 如果关键字 key 存在于缓存中，则返回关键字的值，否则返回 - 1 。
//void put(int key, int value) 如果关键字 key 已经存在，则变更其数据值 value ；如果不存在，则向缓存中插入该组 key - value 。如果插入操作导致关键字数量超过 capacity ，则应该 逐出 最久未使用的关键字。
//函数 get 和 put 必须以 O(1) 的平均时间复杂度运行。
//

#include "unordered_map"
#include "queue"



class LRUCache {

    struct ListNode

    {
        int val;
        ListNode* next;
        ListNode* front;
        ListNode(int x) : val(x), next(NULL), front(NULL) {}
    };

private:
    int capacity = 0;
    int curCap = 0;
    ListNode* begin = nullptr;
    ListNode* end = nullptr;
    std::unordered_map<int, int> myMap;


    void node2end(ListNode* &begin, ListNode* &end, ListNode* cur)
    {
        
        if (cur == nullptr || cur == end)return;
        if (cur == begin && begin == end) {

            return;
        }
        else if (cur == begin && begin != end)
        {
            end->next = cur;
            cur->front = end;
            end = cur;
            begin = begin->next;
            begin->front = nullptr;
            return;
        }
        else
        {
            cur->next->front = cur->front;
            cur->front->next = cur->next;

            end->next = cur;
            cur->front = end;
            end = cur;
            cur->next = nullptr;
            return;
        }
    }

    void delBeginNode(ListNode*& begin, ListNode*& end)
    {
        if (begin == nullptr) // 检查链表是否为空
        {
            end = nullptr; // 如果链表为空，同时将end置为nullptr
            return;
        }
        else if (begin == end)
        {
            delete begin; // 如果只有一个节点，直接删除它
            begin = nullptr;
            end = nullptr;
            return;
        }
        else
        {
            begin = begin->next;
            begin->front = nullptr;
            return;
        }

    }

    void addNode(ListNode*& begin, ListNode*& end, ListNode* node)
    {
        if (begin == nullptr)
        {
            // 判空
            begin = node;
            end = node;
            return;
        }
        else
        {
            end->next = node;
            node->front = end;
            end = node;
            return;
        }

    }

public:
    LRUCache(int capacity) {
        this->capacity = capacity;
        
        


    }

    int get(int key) {
        if (this->myMap.find(key) != this->myMap.end())
        {
            // 查到了这个元素，必须去把这个元素从链表里找到调到最后
            ListNode* cur = this->begin;
            while (cur->val != key)
            {
                cur = cur->next;
            }
            // 如果代码没错是一定会找到的，在此不做错误处理。
            this->node2end(this->begin, this->end, cur);

            return this->myMap[key];
        }
        else
        {
            return -1;
        }


    }

    void put(int key, int value) {
        if (this->myMap.find(key) != this->myMap.end())
        {
            // 已经有这个元素
            this->myMap[key] = value;
            // 把这个key移到queue的最后
            // 找到对应的Node
            ListNode* cur = this->begin;
            while (cur->val != key)
            {
                cur = cur->next;
            }
            // 如果代码没错是一定会找到的，在此不做错误处理。
            this->node2end(this->begin, this->end, cur);
            

        }
        else
        {
           // 没这个元素，判定满了没有
            if (this->curCap < this->capacity)
            {
                //没有满
                this->myMap[key] = value;
                ListNode* newNode = new ListNode(key);

                //if (this->begin == nullptr && this->end == nullptr)
                //{
                //    //没有元素
                //    this->begin = newNode;
                //    this->end = newNode;
                //}
                //else
                //{
                //    this->end->next = newNode;
                //    newNode->front = this->end;
                //    this->end = newNode;
                //}
                this->addNode(this->begin, this->end, newNode);
                curCap++;
            }
            else
            {
                // 满了
                // 删掉最久没使用的元素
                int dkey = this->begin->val;
                this->myMap.erase(dkey);
                this->delBeginNode(this->begin, this->end);


                //推新元素到最后
                this->myMap[key] = value;
                ListNode* newNode = new ListNode(key);
                this->addNode(this->begin, this->end, newNode);


            }
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */