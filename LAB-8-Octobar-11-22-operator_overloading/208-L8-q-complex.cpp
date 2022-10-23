//Create a class which a complex number. Add two objects and display the resultant object. 
//Overload the ++ (post and pre) operator for the class..

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
    complex operator + (complex c)
    {
        complex p;
        p.r=r+c.r;
        p.i=i+c.i;
        return p;
    }
    complex operator ++()    //prefix
    {
        ++r;
        ++i;
        return *this;
    }
    complex operator ++(int)  //postfix
    {
        complex t;
        t.r=r++;
        t.i=i++;
        return t;
    }
};
int main()
{
    complex c1(12,15),c2(1,2),c3,c4,c5;
    c3=c1+c2;
    c1.display();
    c2.display();
    cout<<"\nTOTAL: ";
    c3.display();
    c4=++c1;
    cout<<"\nPREFIX\n";
    c1.display();
    c4.display();
    cout<<"\nPOSTFIX\n";
    c5=c2++;
    c2.display();
    c5.display();
    return 0;
}
