//Write a program to create a class called COMPLEX and implement the following overloading functions ADD that return a COMPLEX number.

#include"iostream"
using namespace std;
class complex
{
    float real;
    float img;
    
    public:
        void enter(float a,float b);
        void disc();
        complex add(int a,complex s2);
        complex add(complex s1,complex s2);
};
void complex :: enter(float a,float b)
{
    real=a;
    img=b;
}
void complex:: disc()
{
    cout<<"\nNUMBER : "<<real<<"+"<<img<<"i";
}
complex complex :: add(int a,complex s2)
{
    complex temp;
    temp.real=s2.real+a;
    temp.img=s2.img;
    return temp;
}
complex complex :: add(complex s1,complex s2)
{
    complex r;
    r.real=s1.real+s2.real;
    r.img=s1.img+s2.img;
    return r;
}
int main()
{
    complex c1,c2,c3,c4;
    int n;
    float a,b,c,d;
    cout<<"\nEnter real and imag part of c1: ";
    cin>>a>>b;
    cout<<"\nEnter real and imag part of c2: ";
    cin>>c>>d;
    c1.enter(a,b);
    c2.enter(c,d);
    cout<<"\nEnter a number: ";
    cin>>n;
    c3=c2.add(n,c1);
    c4=c2.add(c1,c2);
    c3.disc();
    c4.disc();
    return 0;
}