#include <iostream>
#include <cstring>

using namespace std;

// Problem 11: Implement a function that reverses a linked list using pointers.
struct Node {
    int data;
    Node* next;
};

Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    return prev; // The new head of the reversed list
}

int main() {
    Node* list = nullptr;
    for (int i = 5; i > 0; i--) {
        Node* newNode = new Node{i, list};
        list = newNode;
    }

    cout << "Original linked list: ";
    Node* current = list;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    list = reverseList(list);
    cout << "Reversed linked list: ";
    current = list;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // Clean up the dynamically allocated memory
    while (list) {
        Node* temp = list;
        list = list->next;
        delete temp;
    }

    return 0;
}





