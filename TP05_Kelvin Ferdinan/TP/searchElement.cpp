#include <iostream>

struct Node {
    int data;
    Node* next;
};

class SingleLinkedList {
public:
    SingleLinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void searchElement(int value) {
        Node* current = head;
        int position = 1;
        while (current != nullptr) {
            if (current->data == value) {
                std::cout << "Elemen ditemukan pada alamat: " << current << " dan posisi: " << position + 1 << std::endl;
                return;
            }
            current = current->next;
            position++;
        }
        std::cout << "Elemen tidak ditemukan dalam daftar." << std::endl;
    }

private:
    Node* head;
};

int main() {
    SingleLinkedList list;
    int value;

    std::cout << "Masukkan 6 bilangan bulat untuk dimasukkan ke dalam daftar:" << std::endl;
    for (int i = 0; i < 6; ++i) {
        std::cin >> value;
        list.insert(value);
    }

    std::cout << "Masukkan nilai yang ingin dicari: ";
    std::cin >> value;

    list.searchElement(value);

    return 0;
}