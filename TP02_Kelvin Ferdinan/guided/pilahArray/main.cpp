#include <iostream>
using namespace std;

int main() {
    int n;  // Menyimpan jumlah elemen array

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    // Deklarasi array dengan ukuran n
    int arr[n];

    cout << "Masukkan elemen array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Inisialisasi variabel untuk menyimpan nilai maksimum, minimum, dan jumlah
    int maxVal = arr[0];
    int minVal = arr[0];
    int sum = 0;

    // Mencari nilai maksimum, minimum, dan menghitung jumlah
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        sum += arr[i];
    }

    // Menghitung rata-rata
    double average = (double) sum / n;

    // Menampilkan hasil
    cout << "Nilai Maksimum: " << maxVal << endl;
    cout << "Nilai Minimum: " << minVal << endl;
    cout << "Nilai Rata-Rata: " << average << endl;

    return 0;
}
