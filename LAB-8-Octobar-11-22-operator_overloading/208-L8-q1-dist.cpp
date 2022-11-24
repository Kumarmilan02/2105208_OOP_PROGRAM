// WAP to overload following operators for class distance, which stores the distance in feet and inches.
//-add two objects (D3=D1+D2)
//-Add an object to an integer, where the integer should be added to the inches value ( D2=4+D1)

#include <iostream>
using namespace std;

class DIS
{
    int feet;
    int inch;

public:
    DIS(int f = 0, int in = 0)
    {
        feet = f;
        inch = in;
    }
    void display()
    {
        cout << feet << "feet" << inch << "inch" << endl;
    }

    DIS operator+(DIS d)
    {
        DIS t;
        t.inch = inch + d.inch;
        t.feet = feet + d.feet + (t.inch / 12);
        t.inch = t.inch % 12;
        return t;
    }

    DIS operator-(DIS d)
    {
        DIS t;
        t.inch = inch - d.inch;
        t.feet = feet - d.feet - (t.inch / 12);
        t.inch = t.inch % 12;
        return t;
    }
    friend DIS operator+(int, DIS &c);

    DIS operator++()
    {
        ++feet;
        ++inch;
        return *this;
    }
    DIS operator--()
    {
        --feet;
        --inch;
        return *this;
    }
};
DIS operator+(int i, DIS &c)
{
    DIS t;
    t.feet = i + c.feet;
    t.inch = i + c.inch;
    return t;
}
int main()
{
    DIS a(8, 9), b(4, 6), c, h, z, y;

    c = a.operator+(b);
    c.display();

    c = a.operator-(b);
    c.display();

    h = ++a;
    a.display();
    h.display();

    y = 4 + b;
    y.display();
}