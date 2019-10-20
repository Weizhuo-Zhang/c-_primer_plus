#include <iostream>
#include <array>
using namespace std;

int main() {
    const int ArSize = 3;
    array<float, ArSize> ascore;
    float total_score = 0;
    for (int i = 0; i < ArSize; i++) {
        cout << "Enter score[" << i << "]: ";
        cin >> ascore[i];
        total_score += ascore[i];
    }

    cout << "avg score: " << total_score/ArSize << endl;
    return 0;
}
