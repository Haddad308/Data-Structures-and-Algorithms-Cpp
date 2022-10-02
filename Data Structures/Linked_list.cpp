#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10, OO = 0x3f3f3f3f;




class LinkedList {
public:
    struct node {
        int val;
        node *nxt;

        node() {
            val = 0;
            nxt = nullptr;
        }

        node(int v) {
            val = v;
            nxt = nullptr;
        }
    };

private:
    node *head = nullptr;
    node *tail = nullptr;
    int sz = 0;

public:
    void insert(node *cur, int v) { // cur : current node in which we want to insert new node after it
        node *new_node = new node(v);
        new_node->nxt = cur->nxt;
        cur->nxt = new_node;
        if (new_node->nxt == nullptr) // check if new node is the last node
            tail = new_node;
        ++sz;
    }

    node *head_ret() const {
        return head;
    }


    void push_front(int v) {
        node *new_node = new node(v);
        new_node->nxt = head;
        if (head == nullptr) // list is empty
            tail = new_node;
        head = new_node;
        ++sz;
    }

    void push_back(int v) {
        if (tail == nullptr)
            push_front(v);
        else {
//            node *new_node = new node(v);
//            tail->nxt = new_node;
//            tail = new_node;
            insert(tail, v);
        }

    }

    //  *x.val == x->val
    int front() {
        // handling exception when list is empty
        return head->val;
    }

    int back() {
        // handling exception when list is empty
        return tail->val;
    }

    void pop_front() {
        node *tmp = head;
        if (head != nullptr) {
            head = head->nxt;
            --sz;
        }
        delete tmp;
    }

    // size() -> return number of nodes in list

    int size() {
        return sz;
    }

    bool empty() {
        return (sz == 0);
    }

    void clear() {
        node *tmp = head;
        while (tmp != nullptr) {
            node *cur = tmp->nxt;
            delete tmp;
            tmp = cur;
        }
        head = tail = nullptr;
        sz = 0;
    }


    ~LinkedList() {
        clear();
    }

};


int main() {

#ifdef ONPC
    freopen("in.txt", "r", stdin);
#endif


    LinkedList l;
    l.push_back(8);
    l.push_back(1);
    l.push_back(5);
    l.push_back(10);
    l.push_back(2);

    // printing list
    l.insert(l.head_ret(), 17);
    l.push_front(66);

    cout << "size = " << l.size() << "\n";


    cout << "front = " << l.front() << "\n";
    cout << "back = " << l.back() << "\n";

    l.pop_front();

    cout << "size = " << l.size() << "\n";
    cout << "front = " << l.front() << "\n";

    l.clear();
    if (l.empty())
        cout << "list is fadya\n";


    return 0;
}
