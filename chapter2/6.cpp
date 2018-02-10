#include <iostream>

using namespace std;

void displayTime(int, int);

// main function takes 2 inputs and pass them to displayTime() to display the inputs using the display.

int main()
{
    int hourInput;
    int minutesInput;
    cout << "Enter the number of hours: ";
    cin >> hourInput;
    cout << "Enter the number of minutes: ";
    cin >> minutesInput;
    displayTime(hourInput, minutesInput);
    cout << endl;
    return 0;
}

void displayTime(int hour, int minutes)
{
    cout << "Time: " << hour << ":" << minutes;
}
