// arrfun2.cpp -- functions with an array argument
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);
// use std:: instead of using directive
int main()
{
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    std::cout << cookies << " = array address, ";
    std::cout << sizeof cookies << " = sizeof cookies\n";
    int sum = sum_arr(cookies, ArSize);
    std::cout << "Total cookies eaten: " << sum << std::endl;
    sum = sum_arr(cookies, 3);
    std::cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, 4); // another lie
    std::cout << "Last four eaters ate " << sum << " cookies.\n";
    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;
    std::cout << arr << " = arr, ";
    std::cout << sizeof arr << " = sizeof arr\n";
    for (int i = 0; i < n; i++)
    {
        total = total + arr[i];
    }
    return total;
}

/* output
 * 0x7ffc22e57b30 = array address, 32 = sizeof cookies
 * 0x7ffc22e57b30 = arr, 8 = sizeof arr
 * Total cookies eaten: 255
 * 0x7ffc22e57b30 = arr, 8 = sizeof arr
 * First three eaters ate 7 cookies.
 * 0x7ffc22e57b40 = arr, 8 = sizeof arr
 * Last four eaters ate 240 cookies.
 */

/* notes
 * sizeof cookies return the size of total array
 * sizeof arr return the size of an int point variable
 * */
