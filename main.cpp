#include <iostream>
#include <stdlib.h>
using namespace std;

class Node {
private:
    int value;
    Node* next_member = nullptr;
public:
    Node(int value) : value(value) {}
    void add_next_member(Node* ptr) { next_member = ptr; }
    int get_value() { return value; }
    Node* get_next_member() { return next_member; }
};

class LinkedList {
public:
    Node* head = nullptr;
    LinkedList(Node* head) : head(head) {}

    void display() {
        Node* mmbr = head;
        while (mmbr) {
            cout << mmbr->get_value() << endl;
            mmbr = mmbr->get_next_member();
        }
    }

}   ;

int main() {
    Node* first = new Node(10);  
    LinkedList list(first);

    list.display();  // Выведет: 10

    return 0;
}
