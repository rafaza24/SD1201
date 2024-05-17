#include <iostream>
#include <string>

using namespace std;

class Barang{
private :
    string barang;
    int seri;
    int berat;
    string lokasi;
public :
    Barang(string b,int s,int r,string l){
        barang = b;
        seri   = s;
        berat  = r;
        lokasi = l;
    }

    void setbarang (string b){
        barang = b;
    }

    string getbarang(){
        return barang;
    }
    void setseri (int s){
        seri = s;
    }

    int getseri(){
        return seri;
    }
    void setberat (int r){
        berat = r;
    }

    int getberat(){
        return berat;
    }
    void setlokasi (string l){
        lokasi = l;
    }

    string getlokasi(){
        return lokasi;
    }
     void tampilkanInfo() {
        cout << "Nama Barang : " << barang << "\nSeri Barang : " << seri << "\nBerat Barang : "<<berat<<" kg"<<"\nLokasi Barang : "<<lokasi <<endl;
        }
};
int main (){
    Barang brg("Palu",5426123,2,"RAK A");

    cout << "##### INFORMASI DATA ORANG ######"<<endl;
    brg.tampilkanInfo();

    
    return 0;
}