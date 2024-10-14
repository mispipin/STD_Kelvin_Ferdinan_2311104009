#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct mahasiswa{
    char nama[10];
    char nim[10];
    int nilaiuts,nilaiuas,tugas;
};

void inputMhs(mahasiswa &m);
float akhir(mahasiswa m);

int main()
{
    mahasiswa mhs;
    inputMhs(mhs);
    cout <<"nilai akhir = " <<akhir(mhs);
    return 0;
}

void inputMhs(mahasiswa &m){
    cout << "input nama = ";
    cin >> (m).nama;
    cout << "input nim = ";
    cin >> (m).nim;
    cout << "input nilai uts = ";
    cin >> (m).nilaiuts;
    cout << "input nilai uas = ";
    cin >> (m).nilaiuas;
    cout << "input nilai tugas = ";
    cin >> (m).tugas;
}

float akhir(mahasiswa m){
    return (0.4*m.nilaiuas+0.3*m.nilaiuts+0.3*m.tugas);
}
