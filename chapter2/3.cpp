#include <iostream>
using namespace std;

string function1();
string function2();


// Calling function 1 and function 2 twice 
int main()
{
    string function1String;
    string function2String;
    function1String = function1();
    function2String = function2();
    cout << function1String << endl;
    cout << function1String << endl;
    cout << function2String << endl;
    cout << function2String << endl;
}

string function1()
{
    return "Three bind mice";
}

string function2()
{
    return "See how they run";
}
