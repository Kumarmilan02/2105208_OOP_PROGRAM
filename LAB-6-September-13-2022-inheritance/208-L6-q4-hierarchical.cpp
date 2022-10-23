#include"iostream"
#include"math.h"
using namespace std;
class shape
{
    protected:
        float area;
};
class circle:public shape
{
    protected:
        int r;
    public:
    void getdata()
    {
        cout<<"Enter Radius: ";
        cin>>r;
        area=3.14*r*r;
    }
    void display()
    {
        cout<<"\nArea of circle: "<<area;
    }
};
class triangle:public shape
{
    protected:
        int s1,s2,s3;
    public:
    void getdata()
    {
        cout<<"Enter 3 sides: ";
        cin>>s1>>s2>>s3;
        float sp=(s1+s2+s3)/2;
        area=sqrt((sp)*(sp-s1)*(sp-s2)*(sp-s3));
    }
    void display()
    {
        cout<<"\nArea of triangle: "<<area;
    }
};
class rect:public shape
{
    protected:
        int l,b;
    public:
    void getdata()
    {
        cout<<"Enter length and breadth: ";
        cin>>l>>b;
        area=l*b;
    }
    void display()
    {
        cout<<"\nArea of rectangle: "<<area;
    }
};
int main()
{
    circle c;
    triangle t;
    rect r;
    c.getdata();
    t.getdata();
    r.getdata();
    c.display();
    t.display();
    r.display();
    return 0;
}