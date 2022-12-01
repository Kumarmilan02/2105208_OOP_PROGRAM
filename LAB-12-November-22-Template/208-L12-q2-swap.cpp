/*2 (Function Template) Write a program to define the function template for
swapping the two items of various data types such as integers, float and
characters etc*/

#include "iostream"
using namespace std;

template <class T>
void swapm(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}
int main()
{
    float p, q;
    int m, n;
    cout <<"\n Enter two integers : ";
    cin >> m >> n;
    cout <<"\nThe values before swapping are : "<< m <<"\t"<< n;
    swapm(m,n);
    cout <<"\nThe values after swapping are : "<< m <<"\t"<< n;
    cout <<"\n Enter two floats : ";
    cin >> p >> q;
    cout <<"\nThe values before swapping are : " << p <<"\t"<< q;
    swapm(p,q);
    cout <<"\nThe values after swapping are : "<< p <<"\t"<<q;
    return 0;
}