#include <iostream>
int main()
{
    int seconds;
    int days;
    int hours;
    int minutes;
    int newSeconds;

    using namespace std;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    newSeconds = seconds%60;
    minutes = seconds/60;
    hours = minutes/60;
    days = hours/24;

    minutes %= 60;
    hours %= 60;

    cout << seconds << " seconds = " << days << " days, " << hours << " hours, "
        << minutes << " minutes, " << newSeconds << " seconds." << endl;
    return 0;
}
