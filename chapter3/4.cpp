#include <iostream>

void secondsToDays(long);
using namespace std;

//get the user input of the number of seconds
int main()
{
    long secondsInput;

    cout << "Enter the nuber of seconds: ";
    cin >> secondsInput;

    secondsToDays(secondsInput);

    cout << endl;

    return 0;
}

void secondsToDays(long secondsInput)
{
    const int convertedDays = secondsInput / 86400;
    const int secondsMinusDays = (secondsInput % 86400);
    const int convertedMinutes = secondsMinusDays / 1440;
    const int convertedSeconds = (secondsMinusDays % 60);

    cout << secondsInput << " seconds = " << convertedDays
    << " days "  << convertedMinutes << " minutes " << convertedSeconds
    << " seconds";
}
