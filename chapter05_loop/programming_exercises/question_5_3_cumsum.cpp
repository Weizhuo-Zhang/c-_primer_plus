#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    char ch;
    cout << "Enter a num: ";
    cin >> ch;
    while (ch != '0') {
        sum += int(ch - '0');
        cout << "current sum: " << sum << endl;
        cout << "Enter a num: ";
        cin >> ch;
    }
    return 0;
}
