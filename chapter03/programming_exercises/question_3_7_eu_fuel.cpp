#include <iostream>
int main()
{
    float liter;
    float gallon;
    float miles = 62.14;

    using namespace std;
    cout << "Enter liter/100km: ";
    cin >> liter;
    gallon = liter/3.875;
    cout << miles*1.0/gallon << " miles/gallon" << endl;
    return 0;
}
