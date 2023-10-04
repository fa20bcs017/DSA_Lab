#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Function to add a node at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to add a node at the beginning of the list
    void insertAtStart(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Function to add a node at a specific index
    void insertAtIndex(int value, int index) {
        if (index < 0) {
            cout << "Invalid index. Cannot insert at a negative index." << endl;
            return;
        }

        Node* newNode = new Node(value);
        if (index == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            int currentIndex = 0;
            while (current != nullptr && currentIndex < index - 1) {
                current = current->next;
                currentIndex++;
            }
            if (current == nullptr) {
                cout << "Invalid index. Cannot insert at the specified index." << endl;
                return;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    // Function to delete a node at a specific index
    void deleteAtIndex(int index) {
        if (index < 0) {
            cout << "Invalid index. Cannot delete at a negative index." << endl;
            return;
        }

        if (head == nullptr) {
            cout << "List is empty. Cannot delete from an empty list." << endl;
            return;
        }

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            Node* current = head;
            int currentIndex = 0;
            while (current->next != nullptr && currentIndex < index - 1) {
                current = current->next;
                currentIndex++;
            }
            if (current->next == nullptr) {
                cout << "Invalid index. Cannot delete at the specified index." << endl;
                return;
            }
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }

    // Function to print the entire linked list
    void printList() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    LinkedList myList;

    while (true) {
        int choice;
        cout << "Choose an operation:" << endl;
        cout << "1. Insertion at end" << endl;
        cout << "2. Insertion at start" << endl;
        cout << "3. Insertion at index" << endl;
        cout << "4. Deletion at index" << endl;
        cout << "5. Printing list" << endl;
        cout << "6. Exit the programme" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        int value, index;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at end: ";
                cin >> value;
                myList.insertAtEnd(value);
                break;
            case 2:
                cout << "Enter value to insert at start: ";
                cin >> value;
                myList.insertAtStart(value);
                break;
            case 3:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter index to insert at: ";
                cin >> index;
                myList.insertAtIndex(value, index);
                break;
            case 4:
                cout << "Enter index to delete: ";
                cin >> index;
                myList.deleteAtIndex(index);
                break;
            case 5:
                cout << "Linked List: ";
                myList.printList();
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
