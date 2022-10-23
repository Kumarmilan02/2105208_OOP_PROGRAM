//Write a program to find the summation of three numbers by using one function only with function name SUM having three arguments. 
//If at run time one argument is given to the function SUM, then second and third argument will be assumed by default as 10 and 20 respectively. 
//If two arguments are given at run time, then third argument will be assumed as 20. 
//Use function with default argument concepts. 

#include"iostream"
using namespace std;
float addsum(float a,float b=10.0 ,float c=20.0)
{
    return (a+b+c);
}
int main()
{
    float x,y,z;
    cout<<"\nEnter digits: ";
    cin>>x>>y>>z;
    cout<<"\nSUM1: "<<addsum(x,y,z);
    cout<<"\nSUM2: "<<addsum(x,y);
    cout<<"\nSUM3: "<<addsum(x);
    return 0;
}