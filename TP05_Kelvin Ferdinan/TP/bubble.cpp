#include <iostream>

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    void append(int value) {
        Node* newNode = new Node{value, nullptr};
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void bubbleSortList() {
        if (!head) return;

        bool swapped;
        Node* current;
        Node* lastPtr = nullptr;

        do {
            swapped = false;
            current = head;

            while (current->next != lastPtr) {
                if (current->data > current->next->data) {
                    std::swap(current->data, current->next->data);
                    swapped = true;
                }
                current = current->next;
            }
            lastPtr = current;
        } while (swapped);
    }

    void printList() const {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

private:
    Node* head;
};

int main() {
    LinkedList list;
    int value;

    std::cout << "Masukkan 5 elemen integer ke dalam list:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cin >> value;
        list.append(value);
    }

    std::cout << "List sebelum diurutkan:" << std::endl;
    list.printList();

    list.bubbleSortList();

    std::cout << "List setelah diurutkan:" << std::endl;
    list.printList();

    return 0;
}