#include <iostream>

double lightYearsToUnits(double lightYears);

int main()
{
    double lightYears;
    std::cout << "Enter the number of light years: ";
    std::cin >> lightYears;
    std::cout << lightYears << " light years = " << lightYearsToUnits(lightYears)
        << " astronomical units." << std::endl;
}

double lightYearsToUnits(double lightYears)
{
    return (lightYears * 63240);
}
