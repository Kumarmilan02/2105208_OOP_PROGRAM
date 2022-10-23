//WAP to Overload the operator ‘==’ to compare two objects of complex class and display whether they are equal or not. Overload the assignment operator.

#include <iostream>
using namespace std;

class complex
{
    int r,i;
    public:
    complex(int a=0,int b=0)
    {
        r=a;
        i=b;
    }
    void display()
    {
        cout<<r<<"+"<<i<<"i"<<endl;
    }
    friend bool operator ==(complex &,complex &);
};
bool operator==(complex &A,complex &B)
{
    return(A.r==B.r && A.i==B.i);
}
int main()
{
    complex c1(12,15),c2(12,15),c3(1,2);
    c1.display();
    c2.display();
    c3.display();
    if(c1==c3)
    {
        cout<<"same";
    }
    else
        cout<<"different";
    return 0;
}
