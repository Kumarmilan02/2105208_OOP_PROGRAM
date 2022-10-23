//Write a program to demonstrate the concept of call-by-value, call-by-reference & call-by address by taking swapping of two numbers as an example. 
#include "iostream"
using namespace std;
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
void swap1(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
void swap2(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a,b,c,d,e,f;
    cout<<"\nEnter 2 nos: ";
    cin>>a>>b;
    c=a;
    d=b;
    e=a;
    f=b;
    swap(a,b);
    swap1(&c,&d);
    swap2(e,f);
    cout<<"\nCALL BY VALUE: "<<a<<","<<b;
    cout<<"\nCALL BY REFERENCE: "<<c<<","<<d;
    cout<<"\nCALL BY ADDRESS: "<<e<<","<<f;
    return 0;
}