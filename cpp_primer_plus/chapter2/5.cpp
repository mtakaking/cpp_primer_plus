#include <iostream>

using namespace std;

double lightyearsToAstronomical(float);

int main()
{
    //Convert the light years to astronomical units
    float lightYearsInput;
    double astronomicalUnits;
    cout << "Enter the number of light years: ";
    cin >> lightYearsInput;

    astronomicalUnits = lightyearsToAstronomical(lightYearsInput);

    cout << lightYearsInput << " light years = " 
    << astronomicalUnits << " astronomical units." << endl;
    return 0;
}

double lightyearsToAstronomical(float lightYearsInput)
{
    // 1 light year = 63,240 astronomical units
    double astronomical;
    astronomical = (lightYearsInput * 63240);
    return astronomical;
}
