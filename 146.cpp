


//������Ʋ�ʵ��һ������  LRU(�������ʹ��) ���� Լ�������ݽṹ��
//ʵ�� LRUCache �ࣺ
//LRUCache(int capacity) �� ������ ��Ϊ���� capacity ��ʼ�� LRU ����
//int get(int key) ����ؼ��� key �����ڻ����У��򷵻عؼ��ֵ�ֵ�����򷵻� - 1 ��
//void put(int key, int value) ����ؼ��� key �Ѿ����ڣ�����������ֵ value ����������ڣ����򻺴��в������ key - value ���������������¹ؼ����������� capacity ����Ӧ�� ��� ���δʹ�õĹؼ��֡�
//���� get �� put ������ O(1) ��ƽ��ʱ�临�Ӷ����С�
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
        if (begin == nullptr) // ��������Ƿ�Ϊ��
        {
            end = nullptr; // �������Ϊ�գ�ͬʱ��end��Ϊnullptr
            return;
        }
        else if (begin == end)
        {
            delete begin; // ���ֻ��һ���ڵ㣬ֱ��ɾ����
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
            // �п�
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
            // �鵽�����Ԫ�أ�����ȥ�����Ԫ�ش��������ҵ��������
            ListNode* cur = this->begin;
            while (cur->val != key)
            {
                cur = cur->next;
            }
            // �������û����һ�����ҵ��ģ��ڴ˲���������
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
            // �Ѿ������Ԫ��
            this->myMap[key] = value;
            // �����key�Ƶ�queue�����
            // �ҵ���Ӧ��Node
            ListNode* cur = this->begin;
            while (cur->val != key)
            {
                cur = cur->next;
            }
            // �������û����һ�����ҵ��ģ��ڴ˲���������
            this->node2end(this->begin, this->end, cur);
            

        }
        else
        {
           // û���Ԫ�أ��ж�����û��
            if (this->curCap < this->capacity)
            {
                //û����
                this->myMap[key] = value;
                ListNode* newNode = new ListNode(key);

                //if (this->begin == nullptr && this->end == nullptr)
                //{
                //    //û��Ԫ��
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
                // ����
                // ɾ�����ûʹ�õ�Ԫ��
                int dkey = this->begin->val;
                this->myMap.erase(dkey);
                this->delBeginNode(this->begin, this->end);


                //����Ԫ�ص����
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