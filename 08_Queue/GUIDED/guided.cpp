#include <iostream>
using namespace std;

const int maksimalQueue = 5;
int front = 0;
int back = 0;
string queueTeller[5];

bool isFull() {
    if(back == maksimalQueue) {
        return true;
    } else {
        return false;
    }
}

bool isEmpty() {
    if(back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) {
    if(isFull()) {
        cout << "Antrian sudah penuh!" << endl;
    } else {
        if(isEmpty) {
            queueTeller[0] = data;
            front++;
            back++;
        } else {
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() {
    if(isEmpty()) {
        cout << "Antrian kosong!" << endl;
    } else {
        for(int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        queueTeller[back -1] = "";
        back--;
    }
}

int countQueue() {
    return back;
}

void clearQueue() {
    if(isEmpty()) {
        cout << "Antrian kosong!" << endl;
    } else {
        for(int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        front = 0;
        back = 0;
    }
}

void printQueue() {
    cout << "Data antrian Teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if(queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". [kosong]" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Salman");
    enqueueAntrian("Zidan");
    printQueue();
    cout << "Jumlah antrian: " << countQueue() << endl;
    dequeueAntrian();
    printQueue();
    cout << "Jumlah antrian: " << countQueue() << endl;
    clearQueue();
    printQueue();
    cout << "Jumlah antrian: " << countQueue() << endl;
    return 0;
}