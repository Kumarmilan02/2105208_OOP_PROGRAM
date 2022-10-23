//WAP to count number of objects created from a class using concept of static data members and static member function.

#include <iostream>
using namespace std;

class A{
    int n;
    static int c;
    public:
        A(){
            n=0;
            c++;
        }
        A(int p){
            n=p;
            c++;
        }
        A(const A& x){
            n=x.n;
            c++;
        }
        static void print(){
            cout<<"\n OBJECTS CREATED: "<<c<<endl;
        }
        ~A(){
            cout<<"\n DESTRUCTOR "<<endl;

        }
};
int A::c=0;
int main(){
    A a1,a2(5),a3(a2);
    A::print();
    A a4(a3),a5(25);
    a3=a5;
    A::print();

    return 0;

}