#include <iostream>
#include <array>
using namespace std;

const int Months = 12;
int main() {
    const string months[Months] =
    {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    array<int, Months> bookSales;
    for (int i = 0; i < Months; i++) {
        cout << "Please enter book sales in " << months[i] << ": ";
        cin >> bookSales[i];
    }

    int salesTotalAmount = 0;
    for (int sale : bookSales) {
        salesTotalAmount += sale;
    }
    cout << "Total sales: " << salesTotalAmount << endl;
}
