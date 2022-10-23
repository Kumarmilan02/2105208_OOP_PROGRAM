//Write a program to demonstrate the use of scope resolution operay declaring same variable name globally and locally and display the value of global and local variables.tor(::) b


#include"iostream"
using namespace std;
int num=20;
int main()
{
    int num=10;
    cout<<"The value of local variable num: "<<num;
    
    cout<<"\n THe value of global variable num:"<<::num;
    return 0;
}