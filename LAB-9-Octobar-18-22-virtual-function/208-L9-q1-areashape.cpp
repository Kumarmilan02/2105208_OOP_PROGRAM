/*Create a class shape. Derive three classes from it; Circle, Square and Triangle.
Find area of each shape and display it, using virtual function.*/

#include <iostream>
#include <cstring>
#include"math.h"
using namespace std;
class Shape
{
    public:
    virtual void input()
    {
        cout << "\nshape class input called";
    }
    virtual void area()
    {
        cout << "\nFind Shape's area:";
    }
};
class Circle : public Shape
{
    int radius;
    public:
    void input()
    {
        cout << "\nEnter radius of circle: ";
        cin >> radius;
    }
    void area()
    {
        cout << "\nArea of Circle is:" << 3.14 * radius * radius << endl;
    }
};
class Triangle : public Shape
{
    int a,b,c;
    public:
    void input()
    {
        cout << "\nEnter 3 sides of a triangle: ";
        cin >>a>>b>>c;
        
    }
    void area()
    {
        int s;
        s=(a+b+c)/2;
        cout << "\nArea of triangle is: " <<sqrt(s*(s-a)*(s-b)*(s-c))<< endl;
    }
};
class square : public Shape
{
    int l;
    public:
    void input()
    {
        cout << "\nEnter length of square ";
        cin >> l;
    }
    void area()
    {
        cout << "\nArea of square is: " << l * l << endl;
    }
};
int main()
{
    Shape s, *bptr;
    Triangle t;
    Circle c;
    square sq;

    bptr = &s;
    bptr->input();
    bptr->area();

    bptr = &c;
    bptr->input();
    bptr->area();

    bptr = &sq;
    bptr->input();
    bptr->area();

    bptr = &t;
    bptr->input();
    bptr->area();

    return 0;
}