//Create a class which stores time in hh:mm format. Include all the constructors.
//The parameterized constructor should initialize the minute value to zero, if it is not provided.

#include <iostream>
using namespace std;

class Time{
    int hh;
    int mm;
    int cnt=0;
    public:
        //dummy constructor cant be used here due to rise of ambiguity error 
        Time(int p,int q=0){//parameterised constructor with default arguements
            hh=p;
            mm=q;
        }
        Time(){//defualt constructor
            hh=0;
            mm=0;
        }
        Time(const Time& x){//copy constructor
            hh=x.hh;
            mm=x.mm;
        }
        void display(){
            cout<<"\n TIME: "<<hh<<" : "<<mm<<endl;
        }
        ~Time(){
            cout<<"\n DESTRUCTOR IS CALLED "<<endl;
        }

};

int main(){
    Time x;
    Time x1(12);
    Time x2(13,15);
    Time x3(x2);
    x.display();
    x1.display();
    x2.display();
    x3.display();
    return 0;

}