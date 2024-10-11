#include <iostream>

using namespace std;
int main() {
    int x, y, z;

    cout << "Masukkan ukuran pertama: ";
    cin >> x;
    cout << "Masukkan ukuran kedua: ";
    cin >> y;
    cout << "Masukkan ukuran ketiga: ";
    cin >> z;

    int arr[x][y][z];

    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Elemen [" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "\nElemen array yang diinput:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Elemen [" << i << "][" << j << "][" << k << "]: " << arr[i][j][k] << endl;
            }
        }
    }
    return 0;
}
