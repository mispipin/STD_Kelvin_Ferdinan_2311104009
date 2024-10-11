#include <iostream>
using namespace std;

int main() {
  const int MAX_ANGKA = 100;
  int angka[MAX_ANGKA];
  int genap[MAX_ANGKA];
  int ganjil[MAX_ANGKA];
  int jumlah_angka = 0;
  int jumlah_genap = 0;
  int jumlah_ganjil = 0;
  int input;

  cout << "Masukkan angka: ";

  while (true) {
    cin >> input;
    if (input < 0) {
      break;
    }
    angka[jumlah_angka] = input;
    jumlah_angka++;
  }

  for (int i = 0; i < jumlah_angka; i ++) {
    if (angka[i] % 2 == 0) {
      genap[jumlah_genap] = angka[i];
      jumlah_genap++;
    } else {
      ganjil[jumlah_ganjil] = angka[i];
      jumlah_ganjil++;
    }
  }

  cout << "Data Array: ";
  for (int i = 0; i < jumlah_angka; i++) {
    cout << angka[i] << " ";
  }
  cout << endl;

  cout << "Nomor Genap: ";
  for (int i = 0; i < jumlah_genap; i++) {
    cout << genap[i] << " ";
  }
  cout << endl;

  cout << "Nomor Ganjil: ";
  for (int i = 0; i < jumlah_ganjil; i++) {
    cout << ganjil[i] << " ";
  }
  cout << endl;

  return 0;
}
