#include <iostream>
#include <cstring>

using namespace std;
// Problem 10: Create a linked list node structure and write functions to insert, delete, and traverse the list using pointers.
struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (!head) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void deleteList(Node*& head) {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void traverseList(const Node* head) {
    const Node* current = head;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* list = nullptr;
    insert(list, 10);
    insert(list, 20);
    insert(list, 30);
    cout << "Linked list: ";
    traverseList(list);
    deleteList(list);
    return 0;
}
