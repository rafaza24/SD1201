#include <iostream>
#include <string>

using namespace std;

class Barang{
public:
    int seri,berat;
    string lokasi,produk;

void tampilkaninfo(){
    cout << "Nama  Barang : " << produk << endl;
    cout << "Seri  Barang : " << seri << endl;
    cout << "Berat Barang : " << berat << " kg"<<endl;
    cout << "Lokasi Barang : " << lokasi << endl;
}
};

int main (){
    Barang brg;

    brg.produk = "Palu";
    brg.seri = 76855097;
    brg.berat = 2;
    brg.lokasi = "RAK A";

    brg.tampilkaninfo();

    return 0;
}