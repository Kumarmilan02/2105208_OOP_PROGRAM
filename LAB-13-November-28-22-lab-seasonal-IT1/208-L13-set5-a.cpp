/*[A] Write a program to find quotient and remainder after dividing two numbers using a function.
Both the quotient and remainder should be displayed in the function only 
[Neither of the operands should get changed by the function]
*/
//2105208_MILAN KUMAR SAHOO
#include <iostream>
#include <conio.h>
using namespace std;
int findQuotient(int a, int b)
{
    int c = a / b;
    cout << "Quotient= " << c;
    int d = a % b;
    cout << "\nRemainder=" << d;
}
int main()
{
    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    findQuotient(dividend, divisor);
    //findRemainder(dividend, divisor);
    // cout << "Quotient =" << findQuotient(dividend, divisor);
    // cout << "\nRemainder " << findRemainder(dividend, divisor);

    getch();
    return 0;
}