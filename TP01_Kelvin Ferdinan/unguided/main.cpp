/*#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}*/

#include <iostream>

using namespace std;

int main()
{
    string nama, nim;
    cout << "Siapa nama anda?" ;
    cin >> nama;
    cout << "Berapa nim anda?";
    cin >> nim;
    cout << "Nama saya:" << nama << endl;
    cout << "Nim saya:" << nama << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int bil1 = 3, bil2 = 4, hasil1;
    float bil3 = 3.0, bil4 = 4.0, hasil2;
    hasil1 = bil1 + bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 - bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 * bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 / bil2;   // integer division
    cout << hasil1 << endl;
    hasil1 = bil2 / bil1;   // integer division
    cout << hasil1 << endl;
    hasil1 = bil1 % bil2;   // modulo
    cout << hasil1 << endl;
    hasil1 = bil2 % bil1;   // modulo
    cout << hasil1 << endl;
    hasil2 = bil3 / bil4;
    cout << hasil1 << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 > bil2;
    cout << hasil << endl;
    hasil = bil1 >= bil2;
    cout << hasil << endl;
    hasil = bil1 < bil2;
    cout << hasil << endl;
    hasil = bil1 <= bil2;
    cout << hasil << endl;
    hasil = bil1 == bil2;
    cout << hasil << endl;
    hasil = bil1 != bil2;
    cout << hasil << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 <= bil2 and bil1 < bil2;
    cout << hasil << endl;
    hasil = bil1 >= bil2 and bil1 < bil2;
    cout << hasil << endl;
    hasil = not(bil1 >= bil2) or  bil1 < bil2;
    cout << hasil << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int nilai;
    cin >> nilai;
    if (nilai > 80){
        cout << "A" << endl;
    } else {
        cout << "Bukan A" << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a,b, bilangan;
    cout << " Masukan batas bawah: ";
    cin >> a;
    cout << " Masukan batas atas: ";
    cin >> b;
    for (bilangan = a; bilangan <= b; bilangan++){
        cout << "Bilangan" << bilangan << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int bilangan, asli, jumlah;

    cout << "Masukkan bilangan asli: ";
    cin >> asli;

    bilangan = 1;
    jumlah = 0;
    while (bilangan <= asli){
        if (bilangan % 2 == 0){
            jumlah += bilangan;
        }
        bilangan++;
    }
    return 0;
}

#include <iostream>
#include <limits>

int main() {
    float num1, num2;

    // Mendapatkan dua bilangan float dari pengguna
    std::cout << " Masukkan bilangan pertama: ";
    std::cin >> num1;
    std::cout << " Masukkan bilangan kedua: ";
    std::cin >> num2;

    // Menghitung hasilnya
    float penjumlahan = num1 + num2;
    float pengurangan = num1 - num2;
    float perkalian = num1 * num2;
    float pembagian = (num2 != 0) ? num1 / num2 : std::numeric_limits<float>::quiet_NaN();

    // Print the results
    std::cout << " Hasil: " << std::endl;
    std::cout << " penjumlahan: " << penjumlahan << std::endl;
    std::cout << " pengurangan: " << pengurangan << std::endl;
    std::cout << " perkalian: " << perkalian << std::endl;
    if (num2 != 0) {
        std::cout << " pembagian: " << pembagian << std::endl;
    } else {
        std::cout << " pembagian: Error: pembagian dengan 0!" << std::endl;
    }
    return 0;
}

#include <iostream>
#include <string>

std::string angkaToTulisan(int angka) {
    std::string tulisan;

    if (angka < 10) {
        switch (angka) {
            case 0: tulisan = "nol"; break;
            case 1: tulisan = "satu"; break;
            case 2: tulisan = "dua"; break;
            case 3: tulisan = "tiga"; break;
            case 4: tulisan = "empat"; break;
            case 5: tulisan = "lima"; break;
            case 6: tulisan = "enam"; break;
            case 7: tulisan = "tujuh"; break;
            case 8: tulisan = "delapan"; break;
            case 9: tulisan = "sembilan"; break;
        }
    } else if (angka < 20) {
        if (angka == 10) tulisan = "sepuluh";
        else if (angka == 11) tulisan = "sebelas";
        else {
            std::string belasan = "";
            switch (angka % 10) {
                case 1: belasan = "se"; break;
                case 2: belasan = "dua"; break;
                case 3: belasan = "tiga"; break;
                case 4: belasan = "empat"; break;
                case 5: belasan = "lima"; break;
                case 6: belasan = "enam"; break;
                case 7: belasan = "tujuh"; break;
                case 8: belasan = "delapan"; break;
                case 9: belasan = "sembilan"; break;
            }
            tulisan = "belas " + belasan;
        }
    } else if (angka < 100) {
        std::string puluhan = "";
        switch (angka / 10) {
            case 2: puluhan = "dua"; break;
            case 3: puluhan = "tiga"; break;
            case 4: puluhan = "empat"; break;
            case 5: puluhan = "lima"; break;
            case 6: puluhan = "enam"; break;
            case 7: puluhan = "tujuh"; break;
            case 8: puluhan = "delapan"; break;
            case 9: puluhan = "sembilan"; break;
        }
        if (angka % 10 != 0) {
            std::string satuan = "";
            switch (angka % 10) {
                case 1: satuan = "satu"; break;
                case 2: satuan = "dua"; break;
                case 3: satuan = "tiga"; break;
                case 4: satuan = "empat"; break;
                case 5: satuan = "lima"; break;
                case 6: satuan = "enam"; break;
                case 7: satuan = "tujuh"; break;
                case 8: satuan = "delapan"; break;
                case 9: satuan = "sembilan"; break;
            }
            tulisan = puluhan + " puluh " + satuan;
        } else {
            tulisan = puluhan + " puluh";
        }
    }

    return tulisan;
}

int main() {
    int angka;
    std::cout << "Masukkan angka (0-100): ";
    std::cin >> angka;

    if (angka >= 0 && angka <= 100) {
        std::cout << "Angka " << angka << " dalam bentuk tulisan adalah: " << angkaToTulisan(angka) << std::endl;
    } else {
        std::cout << "Angka tidak valid!" << std::endl;
    }

    return 0;
}

#include <iostream>

void print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= i; j++) {
            std::cout << "  ";
        }

        // Print numbers from n down to 1
        for (int j = n - i + 1; j >= 1; j--) {
            std::cout << j << " ";
        }

        // Print asterisk
        std::cout << "* ";

        // Print numbers from 1 up to n
        for (int j = 1; j <= n - i + 1; j++) {
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << " Masukkan angka: ";
    std::cin >> n;
    print_pattern(n);
    return 0;
}

