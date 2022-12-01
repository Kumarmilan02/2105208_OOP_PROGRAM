/*Write a program to create a timel class having hour, min, sec as data members.
add two timel objects using a friend function. 
The copies of the time objects should not be created while passing the arguments. 
There should be restriction on the modifications to the arguments inside the function.*/
//2105208_MILAN KUAMR SAHOO

#include "iostream"
using namespace std;
class timet1
{
    int hr,min,sec;
    public:
    timet1(int h=0,int m=0,int s=0)
    {
        hr=h;
        min=m;
        sec=s;
    }
    void display()
    {
        cout<<"\nTIME: "<<hr<<":"<<min<<":"<<sec;
    }
    friend timet1 operator + (timet1 &t1,timet1 &t2);
    //friend int sum(const time &,const time &);
};
timet1 operator + (timet1 &t1,timet1 &t2)
{
    timet1 t;
    t.sec=t1.sec+t2.sec;
    t.min=t1.min+t2.min;
    t.hr=t1.hr+t2.hr;
    if(t.sec>=60)
    {
        t.sec=t.sec-60;
        t.min=t.min+1;
    }
    if(t.min>=60)
    {
        t.min=t.min-60; 
        t.hr=t.hr+1;
    } 
    return t;  
    //cout<<"ADDING TIME: "<<hours<<":"<<minutes<<":"<<seconds;
}
int main()
{
    timet1 t1(1,47,50),t2(2,34,59),sum;
    t1.display();
    t2.display();
    sum=t1+t2;
    cout<<"\nADDITION NEW TIME";
    sum.display();
    return 0;
}