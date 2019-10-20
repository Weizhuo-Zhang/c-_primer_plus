#include <iostream>
using namespace std;

int main() {
    int small_num;
    int big_num;
    int sum = 0;
    cout << "Enter small numeber: ";
    cin >> small_num;
    cout << "Enter big numeber: ";
    cin >> big_num;

    cout << "small: " << small_num << endl;
    cout << "big: " << big_num << endl;
    for (int i = small_num; i <= big_num; i++) {
        sum += i;
    }

    cout << "sum: " << sum << endl;
    return 0;
}
