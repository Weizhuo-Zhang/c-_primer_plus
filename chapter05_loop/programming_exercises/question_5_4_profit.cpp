#include <iostream>
using namespace std;

int main() {
    const int maxIter = 1000;
    float daphne = 100;
    float cleo = 100;
    for (int i = 1; i <= maxIter; i++) {
        daphne += 0.1 * 100;
        cleo *= 1.05;
        if (cleo > daphne) {
            cout << "After " << i << " yeas later, Cleo invests exceeds Daphne.\n";
            cout << "Cleo: " << cleo << "$.\n";
            cout << "Daphne: " << daphne << "$.\n";
            break;
        }
    }
}
