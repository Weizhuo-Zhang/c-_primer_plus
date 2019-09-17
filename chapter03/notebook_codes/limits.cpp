// limits.cpp
#include <iostream>
#include <climits>       // use limits.h for older systems
int main()
{
    using namespace std;
    int n_int = INT_MAX;      //initialize n_int to max int value
    short n_short = SHRT_MAX; //symbols defined in climits file
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // size of operator yields size of type or of variable
    cout <<"int is " << sizeof n_int << " bytes." << endl;
    cout <<"short is " << sizeof n_short << " bytes." << endl;
    cout <<"long is " << sizeof n_long  << " bytes." << endl;
    cout <<"long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;

    cout << "Maxium vlaues: " << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;

    cout << "Minimul int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    return 0;
}
