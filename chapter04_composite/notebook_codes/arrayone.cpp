// arrayone.cpp -- small arrays of integers
#include <iostream>
int main()
{
    using namespace std;
    int yams[3] = {7, 8, 6};

    cout << "Size of yams array = " << sizeof yams << " bytes\n";
    cout << "Size of one element = " << sizeof yams[0] << " bytes\n";
}
