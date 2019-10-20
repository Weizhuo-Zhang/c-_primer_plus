#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int ArSize = 20;
    char first_name[ArSize];
    char last_name[ArSize];
    char name[ArSize*2];

    cout << "Enter your first name: ";
    cin.getline(first_name, ArSize);
    cout << "Enter your last name: ";
    cin.getline(last_name, ArSize);
    strcat(name, first_name);
    strcat(name, ", ");
    strcat(name, last_name);
    cout << "Here's the information in a single string: " << name << endl;

    return 0;
}
