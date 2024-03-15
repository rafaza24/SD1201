#include <iostream>
using namespace std;

int main ()
{
    int bilangan , total = 0;
    
    cout << "masukan bilangan : ";
    cin >> bilangan;
    while (bilangan > 0)
        {
        total++;
        bilangan = bilangan/10;
        }
    cout<<"\nJumlah digit bilngan tersebut adalah "<<total;
    cout<< endl;
    return 0;
}