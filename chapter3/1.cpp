#include <iostream>
using namespace std;

int inchesToFeet(int);
int inchesToInches(int);

int main()
{
    int inchesInput;
    int convertedFeet;
    int convertedInches;
    cout << "Enter your height in inches: ";
    cin >> inchesInput;
    convertedFeet = inchesToFeet(inchesInput);
    convertedInches = inchesToInches(inchesInput);
    cout << "Your height is " << convertedFeet << " feet "
    << convertedInches << " inches." << endl;
    return 0;
}

int inchesToFeet(int inches)
{
    const int feet = inches / 12;
    return feet;
}

int inchesToInches(int inchesInput)
{
    const int inches = inchesInput % 12;
    return inches;
}