#include <iostream>
using namespace std;

struct CandyBar {
    string brand;
    float weight;
    int calories;
};

int main() {
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "snack: \n";
    cout << "brand: " << snack.brand << endl;
    cout << "weight: " << snack.weight << endl;
    cout << "calories: " << snack.calories << endl;
    return 0;
}
