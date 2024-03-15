#include <iostream>

using namespace std;

int main() {
    int nilai_uang;
    cout << "Masukkan nilai uang (rupiah) : ";
    cin >> nilai_uang;

    int pecahan_1000 = nilai_uang / 1000;
    int sisa_1000 = nilai_uang % 1000;

    int pecahan_500 = sisa_1000 / 500;
    int sisa_500 = sisa_1000 % 500;

    int pecahan_100 = sisa_500 / 100;
    int sisa_100 = sisa_500 % 100;

    int pecahan_50 = sisa_100 / 50;
    int sisa_50 = sisa_100 % 50;

    int pecahan_25 = sisa_50 / 25;
    int sisa_25 = sisa_50 % 25;

    cout << "Nilai tukaran pecahan : " << endl;
    cout << "Rp1000 : " << pecahan_1000 << endl;
    cout << "Rp500 : " << pecahan_500 << endl;
    cout << "Rp100 : " << pecahan_100 << endl;
    cout << "Rp50 : " << pecahan_50 << endl;
    cout << "Rp25 : " << pecahan_25 << endl;

    return 0;
}