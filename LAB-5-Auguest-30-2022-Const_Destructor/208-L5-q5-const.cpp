//WAP to demonstrate the order of call of constructors and destructors for a class.

#include <iostream>
using namespace std;

class A{
    int n;
    static int c;
    public:
        A(){
            n=0;
            cout<<"\n OBJECT NO. "<<++c<<" IS CREATED. "<<endl;
        }
        A(int p){
            n=p;
            cout<<"\n OBJECT NO. "<<++c<<" IS CREATED. "<<endl;
        }
        A(const A &x){
            n=x.n;
            cout<<"\n OBJECT NO. "<<++c<<" IS CREATED. "<<endl;
        }
        ~A(){
            cout<<"\n OBJECT NO. "<<c--<<" IS DESTROYED. "<<endl;

        }
};
int A::c=0;
int main(){
    A a1,a2(5),a3(a2);
    int i=10,j=11;
    if(i<j){
        A a4(a3),a5;
        a5=a4;
    }
    return 0;
}