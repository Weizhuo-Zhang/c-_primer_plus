#include <iostream>
int main()
{
    long  world_population;
    long us_population;
    using namespace std;
    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of the US: ";
    cin >> us_population;
    cout << "The population of the US is " <<
        us_population*100.0/world_population << "% of the world population."<<endl;
    return 0;
}
