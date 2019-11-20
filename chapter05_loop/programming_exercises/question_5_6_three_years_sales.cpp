#include <iostream>
using namespace std;

const int Years = 3;
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

    int bookSales[Years][Months];
    for (int i = 0; i < Years; i++) {
        cout << "Year " << i+1 << ": \n";
        for (int j = 0; j < Months; j++) {
            cout << "    Please enter book sales in " << months[j] << ": ";
            cin >> bookSales[i][j];
        }
    }
    cout << endl;

    int salesTotalAmount = 0;
    for (int i = 0; i < Years; i++) {
        int annualSales = 0;
        for (int j = 0; j < Months; j++) {
            annualSales += bookSales[i][j];
        }
        salesTotalAmount += annualSales;
        cout << "Year " << i+1 << " sales: " << annualSales << endl;
    }
    cout << endl << "Total sales: " << salesTotalAmount << endl;
}
