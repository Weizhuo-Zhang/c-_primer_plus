#include <iostream>

int getInchHeight(int foot, int inch);
float getMeterHeight(int inch);
float getKgWeight(float pound);
float getBMI(float kg, float meter);

int main()
{
    using namespace std;
    int inch;
    int foot;
    float pound;
    int total_inch;
    float meter;
    float kg;
    float BMI;

    cout << "Please input foot: ";
    cin >> foot;
    cout << "Please intput inch: ";
    cin >> inch;
    cout << "Please input pound: ";
    cin >> pound;

    total_inch = getInchHeight(foot, inch);
    cout << "total_inch = " << total_inch << endl;
    meter = getMeterHeight(total_inch);
    cout << "meter = " << meter << endl;
    kg = getKgWeight(pound);
    cout << "kg = " << kg << endl;
    BMI = getBMI(kg, meter);
    cout << "BMI = " << BMI << endl;
}


int getInchHeight(int foot, int inch)
{
    const int footToInch = 12;
    return (foot*footToInch+inch);
}

float getMeterHeight(int inch)
{
    const float inchToMeter = 0.0254;
    return inch * inchToMeter;
}

float getKgWeight(float pound)
{
    const float poundToKg = 2.2;
    std::cout << "pound : " << pound << std::endl;
    return pound / poundToKg;
}

float getBMI(float kg, float meter)
{
    return kg/(meter*meter);
}
