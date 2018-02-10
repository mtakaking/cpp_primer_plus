#include <iostream>
#include <cmath>

using namespace std;

float latitudeCalculation(float, float, float);

int main()
{
    float degreesInput;
    float minutesInput;
    float secondsInput;

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degreesInput;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutesInput;
    cout << "Finally, enter the seconds of arc: ";
    cin >> secondsInput;

    const float latitude = latitudeCalculation(degreesInput, minutesInput, secondsInput);

    cout << degreesInput << " degrees, " << minutesInput << " minutes, " 
    << secondsInput << " seconds = " << latitude << " degrees" << endl;

    return 0;
}

float latitudeCalculation(float degreesInput, float minutesInput, float secondsInput)
{
    const float minutesToDegrees = (minutesInput / 60);
    const float secondsToDegrees = (secondsInput / 3600);
    const float latitude = degreesInput + minutesToDegrees + secondsToDegrees;
    return latitude;
}