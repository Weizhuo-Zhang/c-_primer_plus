#include <iostream>
using namespace std;

struct pizza {
    string brand;
    int diameter;
    int weight;
};

int main() {
    pizza temp_pizza;
    cout << "brand: ";
    getline(cin, temp_pizza.brand);
    cout << "diameter: ";
    cin >> temp_pizza.diameter;
    cout << "weight: ";
    cin >> temp_pizza.weight;

    cout << "\n+++++++++++++++++++++++++\n";
    cout << "brand: " << temp_pizza.brand << endl;
    cout << "diameter: " <<  temp_pizza.diameter << endl;
    cout << "weight: " <<  temp_pizza.weight << endl;
    return 0;
}
