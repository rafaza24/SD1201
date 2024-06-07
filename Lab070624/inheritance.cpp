#include<iostream>
using namespace std;

class Hewan {
    public:
    void predator(){
    cout << "Hewan ini predator"<< endl;
    }
    void taring(){
    cout << "Hewan ini bertaring"<<endl;
    }
    void cakar(){
    cout << "Hewan ini memiliki cakar"<<endl;
    }
    

};

class Harimau : public Hewan {
    public :
    void predator(){
        cout<<"Harimau adalah hewan yang suka doi"<< endl;
    }
};

class Singa : public Hewan {
    public :
    void predator(){
        cout<<"Singa adalah raja rimba"<< endl;
    }
};

class Macan : public Hewan {
    public :
    void predator(){
        cout<<"Macan adalah kawand Singa"<< endl;
    }
};

int main(){
    Harimau hrm;
    Singa sng;
    Macan mcn;

   // hrm.getHarimau();
    hrm.predator();
    hrm.taring();
    hrm.cakar();

    cout<<endl;

   // sng.getSinga();
    sng.predator();
    sng.taring();
    sng.cakar();

    cout<<endl;

  //  mcn.getMacan();
    mcn.predator();
    mcn.taring();
    mcn.cakar();


    return 0;

}