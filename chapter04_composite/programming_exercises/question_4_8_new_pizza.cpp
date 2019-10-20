#include <iostream>
using namespace std;

struct pizza {
    string brand;
    int diameter;
    int weight;
};

int main() {
    pizza * temp_pizza = new pizza;
    cout << "diameter: ";
    cin >> temp_pizza->diameter;
    cin.get();
    cout << "brand: ";
    getline(cin, (*temp_pizza).brand);
    cout << "weight: ";
    cin >> temp_pizza->weight;

    cout << "\n+++++++++++++++++++++++++\n";
    cout << "brand: " << temp_pizza->brand << endl;
    cout << "diameter: " <<  temp_pizza->diameter << endl;
    cout << "weight: " <<  temp_pizza->weight << endl;
    delete temp_pizza;
    return 0;
}
