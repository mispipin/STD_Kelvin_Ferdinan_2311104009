#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

class Node {
public:
    Book data;
    Node* prev;
    Node* next;
    
    Node(Book bookData) {
        data = bookData;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insertBook(Book book) {
        Node* newNode = new Node(book);
        if (tail != nullptr) {
            tail->next = newNode;
            newNode->prev = tail;
        } else {
            head = newNode;
        }
        tail = newNode;
    }

    void displayForward() {
        Node* current = head;
        if (current == nullptr) {
            cout << "Daftar buku kosong." << endl;
            return;
        }
        cout << "Daftar Buku (Awal ke Akhir):" << endl;
        while (current != nullptr) {
            cout << "ID: " << current->data.id
                 << ", Judul: " << current->data.title
                 << ", Penulis: " << current->data.author << endl;
            current = current->next;
        }
    }

    void displayBackward() {
        Node* current = tail;
        if (current == nullptr) {
            cout << "Daftar buku kosong." << endl;
            return;
        }
        cout << "Daftar Buku (Akhir ke Awal):" << endl;
        while (current != nullptr) {
            cout << "ID: " << current->data.id
                 << ", Judul: " << current->data.title
                 << ", Penulis: " << current->data.author << endl;
            current = current->prev;
        }
    }
};

int main() {
    DoublyLinkedList bookList;
    int n;

    cout << "Masukkan jumlah buku yang ingin ditambahkan: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; ++i) {
        Book newBook;
        cout << "Masukkan ID Buku: ";
        cin >> newBook.id;
        cin.ignore();
        cout << "Masukkan Judul Buku: ";
        getline(cin, newBook.title);
        cout << "Masukkan Penulis Buku: ";
        getline(cin, newBook.author);
        bookList.insertBook(newBook);
    }

    bookList.displayForward();

    bookList.displayBackward();

    return 0;
}