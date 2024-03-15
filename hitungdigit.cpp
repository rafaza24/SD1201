#include<iostream>

using namespace std;
int main()
{
   int bilangan, total=0;
   cout<<"Masukan bilangan : ";
   cin>>bilangan;
   while(bilangan>0)
   {
      total++;
      bilangan = bilangan/10;
   }
   cout<<"\nJumlah digit bilangan tersebut adalah "<<total<< " digit";
   cout<<endl;
   return 0;
}