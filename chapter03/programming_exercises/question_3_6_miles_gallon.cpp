#include <iostream>
int main()
{
    int miles;
    int gallon;

    using namespace std;
    cout << "Enter miles: ";
    cin >> miles;
    cout << "Enter gallon: ";
    cin >> gallon;
    cout << miles*1.0/gallon << " miles/gallon" << endl;
    return 0;
}
