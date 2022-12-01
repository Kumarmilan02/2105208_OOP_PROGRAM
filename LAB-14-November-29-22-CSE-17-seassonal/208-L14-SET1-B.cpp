/*q2.) create a template function to add corresponding elements of two arrays, the size of the two arrays may not be same.
-demonstrate by using float type and integer type
-display the resultant array within the function itself*/

#include <bits/stdc++.h>
using namespace std;

template <class T>
T add(T *arr, int s1, T *arr2, int s2)
{
    int tsize = (s1 >= s2) ? s1 : s2;
    T tarr[tsize];
    if (s1 > s2)
    {
        int i = 0;
        while (i < s2)
        {
            tarr[i] = arr[i] + arr2[i];
            i++;
        }
        while (i < s1)
        {
            tarr[i] = arr[i];
            i++;
        }
    }
    else
    {
        int i = 0;
        while (i < s1)
        {
            tarr[i] = arr[i] + arr2[i];
            i++;
        }
        while (i < s2)
        {
            tarr[i] = arr2[i];
            i++;
        }
    }

    for (int j = 0; j < tsize; j++)
    {
        cout << tarr[j] << '\t';
    }
    cout << '\n';
}

int main()
{
    float f1[] = {0.1, 0.2, 0.3};
    float f2[] = {0.4, 0.5, 0.6};
    int sf1 = 3, sf2 = 3;
    add<float>(f1, sf1, f2, sf2);

    int i1[] = {1, 2, 3};
    int i2[] = {4, 5, 6, 7};
    int if1 = 3, if2 = 4;
    add<int>(i1, if1, i2, if2);
}