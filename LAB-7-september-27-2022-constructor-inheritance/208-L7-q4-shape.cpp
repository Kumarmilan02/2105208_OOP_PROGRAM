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
        int rad;
    public:
    circle(int r)
    {
        rad=r;
    }
    float areac()
    {
        return(3.14* rad* rad);
    }
    void display()
    {
        cout<<"\nArea of circle: "<<areac();
    }
};
class triangle:public shape
{
    protected:
        int sd1,sd2,sd3;
    public:
    triangle(int s1,int s2,int s3)
    {
        sd1=s1;
        sd2=s2;
        sd3=s3;
    }
    int areatng()
    {
        float sp=(sd1+sd2+sd3)/2;
        return(sqrt((sp)*(sp-sd1)*(sp-sd2)*(sp-sd3)));
    }
    void display()
    {
        cout<<"\nArea of triangle: "<<areatng();
    }
};
class rect:public shape
{
    protected:
        int length,breadth;
    public:
    rect(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int arearec()
    {
        return(length*breadth);
    }
    void display()
    {
        cout<<"\nArea of rectangle: "<<arearec();
    }
};
int main()
{
    int r,l,b,s1,s2,s3;
    cout<<"RADIUS: ";
    cin>>r;
    cout<<"Length and Bredth: ";
    cin>>l>>b;
    cout<<"3 side : ";
    cin>>s1>>s2>>s3;
    circle C(r);
    C.display();
    triangle T(s1,s2,s3);
    T.display();
    rect R(l,b);
    R.display();
    return 0;
    
}