#include "stack.h"
#include <iostream>
using namespace std;

void createStack(stack &S) {
    S.Top = 0;
}

bool isEmpty(stack S) {
    return S.Top == 0;
}

bool isFull(stack S) {
    return S.Top == 15;
}

void push(stack &S, infotype x) {
    if (!isFull(S)) {
        S.Top++;
        S.info[S.Top - 1] = x;
    } else {
        cout << "Stack penuh!\n";
    }
}

int pop(stack &S) {
    if (!isEmpty(S)) {
        infotype x = S.info[S.Top - 1];
        S.Top--;
        return x;
    } else {
        cout << "Stack kosong!\n";
        return -1;
    }
}

void printInfo(stack S) {
    if (isEmpty(S)) {
        cout << "Stack kosong\n";
    } else {
        for (int i = S.Top - 1; i >= 0; i--) {
            cout << S.info[i] << " ";
        }
        cout << endl;
    }
}