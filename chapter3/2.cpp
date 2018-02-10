#include <iostream>
#include <cmath>
using namespace std;

float BMICalculation(int, int, int);

int main()
{
    //defining user input variables
    int inchesInput;
    int feetInput;
    int poundsInput;

    //taking user input
    cout << "Enter your height and weight for BMI" << endl;
    cout << "Feet: ";
    cin >> feetInput;
    cout << "Inch: ";
    cin >> inchesInput;
    cout << "Weight in Pounds: ";
    cin >> poundsInput;
    
    //Defining BMI Value and printing the value
    const float BMIValue = BMICalculation(inchesInput, feetInput, poundsInput);

    cout << "Your BMI Value is: " << BMIValue << endl;

    return 0;
}

float BMICalculation(int inchesInput, int feetInput, int poundsInput)
{    
    float inchesTotal;

    //Calculating inches
    inchesTotal = inchesInput + (feetInput * 12);
    
    //Converting inches to meters
    const float meters = inchesTotal * 0.0254;

    //Converting pounds to kilograms
    const float kilograms = poundsInput / 2.2;

    //Calculating BMI value
    const float BMI = kilograms / pow(meters,2.0);

    return BMI;
}

