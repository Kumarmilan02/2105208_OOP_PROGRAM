/*Write a program to convert temperature specified in Celsius in one class into Fahrenheit in another class.
Use operator function in appropriate class to perform the required conversion.
[Hint.To convert temperatures in degrees Celsius to Fahrenheit, multiply it by 1.8(or 9 / 5) and add 32. i.e., F = C * 1.8 + 32]*/
// 2105208_MILAN KUMAR SAHOO
#include "iostream"
using namespace std;
// Class 1
class Celsius
{
    // Data Member
    double celsius;

    // Member Function
    Celsius(double celsius)
    {
        this->celsius = celsius;
    }

    // Operator Overloading
    operator Fahrenheit()
    {
        return Fahrenheit((celsius * 1.8) + 32);
    }
};

// Class 2
class Fahrenheit
{
    // Data Member
    double fahrenheit;

    // Member Function
    Fahrenheit(double fahrenheit)
    {
        this->fahrenheit = fahrenheit;
    }
};

// Main Function
int main()
{
    Celsius c(25);
    Fahrenheit f = c; // conversion from Celsius to Fahrenheit

    cout << "Temperature in Celsius: " << c.celsius << endl;
    cout << "Temperature in Fahrenheit: " << f.fahrenheit << endl;

    return 0;
}