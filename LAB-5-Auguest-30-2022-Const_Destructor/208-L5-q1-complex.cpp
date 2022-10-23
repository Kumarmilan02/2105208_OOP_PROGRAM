//Create a class complex which stores real and imaginary part of a complex number. 
//Include all types of constructors and destructor. 
//The destructor should display a message about the destructor being invoked.
// Create objects using different constructors and display them.

#include <iostream>
using namespace std;

class complex{
    int real;
    int img;
    public:
    //complex(){}--DUMMY CONSTRUCTOR HERE WILL CREATE AMBIGUITY ERROR
        complex(){//Default Constructor
            real=10;
            img=20;
            
        }
        complex(const complex& x){//copy constructor
            real=x.real;
            img=x.img;

        }
        complex(int p, int q){//parameterised constructor
            real=p;
            img=q;
        }
        void show(){
            cout<<"\n Number: "<<real<<" + i"<<img<<endl;
        }
        ~complex(){
            cout<<"\n DESTRUCTOR IS INVOKED. ";
        }

};
int main(){
    complex c1;
    complex c2(10,17);
    complex c3(c2);
    c1.show();
    c2.show();
    c3.show();
    return 0;
}