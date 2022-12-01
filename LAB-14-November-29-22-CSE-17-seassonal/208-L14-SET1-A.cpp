/*Q1.) create a function to increment value of x by value of y, if value of y is not provided increment x by 1*/
//2105028_MILAN KUMAR SAHOO

#include <bits/stdc++.h>
using namespace std;

void incre(int &x, int y = 1)
{
    x = x + y;
}

int main()
{
    int a, b;
    cout << "enter value of a\n";
    cin >> a;
    cout << "enter value of b\n";
    cin >> b;

    while (1)
    {
        int n;
        cout << "select an option\n";
        cout << "1.) to increment value of a by b\n2.) to increment value of a by 1\n";
        cin >> n;
        switch (n)
        {
        case 1:
            incre(a, b);
            cout << a << '\n';
            break;
        case 2:
            incre(a);
            cout << a << '\n';
            break;
        case 3:
            exit(0);
        }
    }
}