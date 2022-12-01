/*Write a C++ program to create a template function to find the smallest of three numbers.
Pls do not create copies of the arguments while passing them as parameters and neither modify them inside the function.*/
//2105208-MILAN KUMAR SAHOO

#include <iostream>
using namespace std;

template <class T>
T findmin(const T &x1, const T &x2, const T &x3)
{
    if (x1 < x2)
    {
        if (x1 < x3)
        {
            return x1;
        }
        else
        {
            return x3;
        }
    }
    else
    {
        if (x2 < x3)
        {
            return x2;
        }
        else
        {
            return x3;
        }
    }
}
int main()
{
    int p;
    float q;
    double r;
    p = findmin(111, 15, 83);
    q = findmin(23.5, 2.86, 34.0);
    r = findmin(43.6, 67.55, 78.34);
    cout << "\n SMALLEST NUMBERS: " << p << "--" << q << "--" << r;
    return 0;
}