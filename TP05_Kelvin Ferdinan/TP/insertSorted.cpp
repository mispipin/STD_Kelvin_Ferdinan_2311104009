#include <iostream>

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    void insertSorted(int value) {
        Node* newNode = new Node{value, nullptr};
        if (!head || head->data >= value) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            while (current->next && current->next->data < value) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    void display() const {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

private:
    Node* head;
};

int main() {
    LinkedList list;
    int value;

    std::cout << "Masukkan 4 elemen integer:" << std::endl;
    for (int i = 0; i < 4; ++i) {
        std::cin >> value;
        list.insertSorted(value);
    }

    std::cout << "Masukkan elemen tambahan:" << std::endl;
    std::cin >> value;
    list.insertSorted(value);

    std::cout << "List setelah elemen baru dimasukkan:" << std::endl;
    list.display();

    return 0;
}