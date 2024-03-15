#include <iostream>
using namespace std;

int main() 
{
  double diameter = 0;
  double jari_jari = 0;

  
  while (jari_jari <= 10) {
    if (jari_jari <= 2) {
      diameter = 2 * jari_jari;
    }
    else if (jari_jari <= 4) {
      diameter = 2 * jari_jari;
    }
    else if (jari_jari <= 6) {
      diameter = 2 * jari_jari;
    }
    else if (jari_jari <= 8) {
      diameter = 2 * jari_jari;
    }
    else {
      diameter = 2 * jari_jari;
    }
    jari_jari += 1;
  }

  cout << "Diameter setelah berjalan selama 10 detik: " << diameter << endl;

  return 0;
}