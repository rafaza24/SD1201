#include <iostream>
using namespace std ;

void add_score(int *score) {
    *score = *score  + 5;
    cout << "score diubah ke: " << *score <<endl;
}

int main() {
    int score = 0;

    cout << "score sebelum diubah: " << score <<endl;
    add_score(&score);
    add_score(&score);
    add_score(&score);
    add_score(&score);
    add_score(&score);
    add_score(&score);
    cout << "score setelah diubah: " << score <<endl;

    return 0;
}
