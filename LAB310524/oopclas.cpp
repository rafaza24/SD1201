#include <iostream>
using namespace std;

class Number1 {
private:
    int y ;
 public:
   void setY(int zahra) {
    y=zahra;
   }
  int getY () {
return y; 
   }
};

class Number2 {
    public :
    int x ;
};


int main() {
   Number1 satu;
   Number2 dua;

   satu.setY(25);
   dua.x = 30;

   cout << "y=" << satu.getY() << endl;
   cout << "x=" << dua.x << endl;
return 0; 

}