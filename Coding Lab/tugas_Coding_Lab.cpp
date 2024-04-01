#include <iostream>
#include <string>

using namespace std;

struct Pegawai {
    string nama;
    string departemen;
    int gaji;
};

// Fungsi untuk menaikkan gaji sebesar 10%
void naikGaji(Pegawai &pegawai) {
    pegawai.gaji *= 1.1;
}


int main() {
    Pegawai pegawai1 = {"Budi", "IT", 5000000};
    naikGaji(pegawai1);
    cout << "Informasi Pegawai1:" << endl;
    cout << "Nama: " << pegawai1.nama << endl;
    cout << "Departemen: " << pegawai1.departemen << endl;
    cout << "Gaji: " << pegawai1.gaji << endl;

    return 0;
}
