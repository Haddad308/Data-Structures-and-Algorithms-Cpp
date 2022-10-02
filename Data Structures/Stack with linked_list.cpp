#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10, OO = 0x3f3f3f3f;

/*
نسالك يارب نفسًا سهلة، هيّنة، ليّنة، قريبة من الناس :))
*/


class LinkedList {
public:
    struct node {
        int val;
        node *edge;

        node() {
            val = 0;
            edge = nullptr;
        }

        node(int v) {
            val = v;
            edge = nullptr;
        }
    };

private:
    node *head = nullptr;
    node *tail = nullptr;
    int sz = 0;

public:
    void insert(node *cur, int v) { // cur : current node in which we want to insert new node after it
        node *new_node = new node(v);
        new_node->edge = cur->edge;
        cur->edge = new_node;
        if (new_node->edge == nullptr) // check if new node is the last node
            tail = new_node;
        ++sz;
    }

    node *head_ret() const {
        return head;
    }


    void push_front(int v) {
        node *new_node = new node(v);
        new_node->edge = head;
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
//            tail->edge = new_node;
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
            head = head->edge;
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
            node *cur = tmp->edge;
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


class Stack {
    LinkedList ll;
public:
    void push(int v) {
        ll.push_front(v);
    }

    int top() {
        return ll.front();
    }

    void pop() {
        ll.pop_front();
    }

    bool empty() {
        return ll.empty();
    }

    int size() {
        return ll.size();
    }

};

int main() {

    Stack x ;
    x.push(3) ;
    x.push(2) ;
    x.push(19) ;

    cout << x.top();
    return 0;
}
