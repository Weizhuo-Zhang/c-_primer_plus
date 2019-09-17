#include <iostream>

float celToFah(float cel);

int main()
{
    float cel;
    std::cout << "Please enter a Celsius value: ";
    std::cin >> cel;
    std::cout << cel << " degrees Celsius is " << celToFah(cel) << " degrees"
        << " Fahrenheit" << std::endl;
}

float celToFah(float cel)
{
    return (cel*1.8 + 32.0);
}
