#include <iostream>
using namespace std;

struct CandyBar {
    string brand;
    float weight;
    int calories;
};

int main() {
    CandyBar * snack = new CandyBar[3];
    snack[0] = {"Mocha Munch", 2.3, 350};
    snack[1] = {"Ice", 9.0, 20};
    snack[2] = {"MMMMMMMMMMMMMMM", 1111.0, 900090};

    for (int i = 0; i < 3; i++) {
        cout << "snack index: " << i << endl;
        cout << "brand: " << snack[i].brand << endl;
        cout << "weight: " << snack[i].weight << endl;
        cout << "calories: " << snack[i].calories << endl;
    }
    delete [] snack;
    return 0;
}
