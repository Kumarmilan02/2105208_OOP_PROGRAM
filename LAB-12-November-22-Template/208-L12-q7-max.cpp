/*wap to find maximun element*/

#include "iostream"
using namespace std;

template <class T>
T find_max(T a[], int n)
{
    int i = 0;
    T max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}
int main()
{
    float p[5] = {3.5, 2.3, 1.6, 5.4, 4.4};
    int m[5] = {4, 6, 2, 5, 1};
    char x[5] = {'A', 'J', 'k', '+', '%'};
    int int_max = find_max(m, 5);
    float float_max = find_max(p, 5);
    char char_max = find_max(x, 5);
    cout <<"\nThe max of integer array is : ";
    cout << int_max;
    cout <<"\nThe max of float array is : ";
    cout << float_max;
    cout <<"\nThe max of char array is :";
    cout << char_max;
    return 0;
}
