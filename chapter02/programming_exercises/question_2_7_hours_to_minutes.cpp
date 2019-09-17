/*************************************************************************
    > File Name: question_2_7_hours_to_minutes.cpp
    > Author: Weizhuo Zhang (Ray)
    > Mail: wzhuo.zhang@gmail.com
    > Created Time: Wed Sep 18 02:03:53 2019
 ************************************************************************/

#include <iostream>

void outputFunc(int hours, int minutes);

int main()
{
    int hours;
    int minutes;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter teh number of minutes: ";
    std::cin >> minutes;
    outputFunc(hours, minutes);
}

void outputFunc(int hours, int minutes)
{
    std::cout << "Time: " << hours << ":" << minutes << std::endl;
}
