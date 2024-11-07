#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    return newNode;
}

void insertLast(Node*& head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void deleteFirst(Node*& head) {
    if (head == nullptr) {
        cout << "List kosong, tidak ada elemen yang bisa dihapus.\n";
        return;
    }
    Node* temp = head;
    if (head->next == nullptr) {
        head = nullptr;
    } else {
        head = head->next;
        head->prev = nullptr;
    }
    delete temp;
}

void deleteLast(Node*& head) {
    if (head == nullptr) {
        cout << "List kosong, tidak ada elemen yang bisa dihapus.\n";
        return;
    }
    Node* temp = head;
    if (head->next == nullptr) {
        head = nullptr;
    } else {
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->prev->next = nullptr;
    }
    delete temp;
}

void displayList(Node* head) {
    Node* temp = head;
    cout << "DAFTAR ANGGOTA LIST: ";
    if (temp == nullptr) {
        cout << "List kosong";
    } else {
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) cout << " <-> ";
            temp = temp->next;
        }
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int data;

    cout << "Masukkan elemen pertama = ";
    cin >> data;
    insertLast(head, data);
    displayList(head);

    cout << "Masukkan elemen kedua di akhir = ";
    cin >> data;
    insertLast(head, data);
    displayList(head);

    cout << "Masukkan elemen ketiga di akhir = ";
    cin >> data;
    insertLast(head, data);
    displayList(head);

    cout << "Menghapus elemen pertama...\n";
    deleteFirst(head);
    displayList(head);

    cout << "Menghapus elemen terakhir...\n";
    deleteLast(head);
    displayList(head);

    return 0;
}