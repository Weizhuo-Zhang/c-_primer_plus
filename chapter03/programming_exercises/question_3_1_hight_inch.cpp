#include <iostream>
int main()
{
    const int convertor = 12;
    using namespace std;
    int height_inch;
    cout << "Please input the height: ____ inches\b\b\b\b\b\b\b\b\b\b\b";
    cin >> height_inch;
    cout << height_inch << " inches = " << height_inch/convertor
        << " foots " << height_inch%convertor << " inches" << endl;
    return 0;
}
