#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

void printList(Node* head) {
    while(head->next != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << head->data << " -> NULL";
}

int main() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;

    cout << "The linked list is as follows:" << endl;
    printList(head);
    return 0;
}