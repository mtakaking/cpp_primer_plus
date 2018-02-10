#include <iostream>

using namespace std;

float celsiusToFahrenheit(float);

int main()
{
    float celsiusInput;
    float celsiusInFahrenheit;
    cout << "Please enter a Celsius value: ";
    cin >> celsiusInput;
    celsiusInFahrenheit = celsiusToFahrenheit(celsiusInput);
    cout << celsiusInput << " degrees Celsius is " << celsiusInFahrenheit 
    << " degrees Fahrenheit." << endl;
    return 0;
}

float celsiusToFahrenheit(float celsius)
{
    //fahrenheit = 1.8 * celsius + 32.0
    float fahrenheit;
    fahrenheit = (1.8 * celsius) + 32.0;
    return fahrenheit;
}

