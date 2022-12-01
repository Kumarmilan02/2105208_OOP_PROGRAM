/*wap to bubble sort using template*/

#include "stdio.h"
#include "iostream"
using namespace std;

template <class T>
void bubble(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; i < j; j--)
            {
                if (a[j] < a[j - 1])
                    swap(a[j], a[j - 1]);
            }
    }
}
template <class T>
void swap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}
int main()
{
    float p[5] = {3.5, 2.3, 1.6, 5.4, 4.4};
    int m[5] = {4, 6, 2, 5, 1};
    bubble(p, 5);
    bubble(m, 5);
    cout<<"\n The sorted integer array is: ";
    for (int i = 0; i < 5; i++)
        cout<<m[i]<<" ";
    cout<<endl;
    cout <<"\n The sorted float array is: ";
    for (int i = 0; i < 5; i++)
        cout<<p[i] <<" ";
    cout<<endl;
    return 0;
}
