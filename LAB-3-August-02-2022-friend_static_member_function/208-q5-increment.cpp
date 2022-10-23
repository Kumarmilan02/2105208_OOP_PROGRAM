//WAP to increment the value of an argument given to function USING INLINE function.
#include<iostream>
using namespace std;
inline int incr(int i)
{
    return  ++i;
}
int main()
{
    int a;
    cout<<"Enter the value:";
    cin>>a;
    cout<<"increament value: "<<incr(a);
    return 0;
}
