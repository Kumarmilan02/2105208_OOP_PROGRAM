/*Write a program to find out area or volume of an shape/object by using one function name as FUN-AREA only. 
If the function takes one argument then it will calculate area of a circle, two argument for area of rectangle and three argument volume of a box. 
If no argument is given to the function, then it will display appropriate message.
*/
//2105208_MILAN KUMAR SAHOO

#include<iostream>
using namespace std;

double FUN_AREA(float r)

{
    return(3.14*r*r);
}
double FUN_AREA(float l,float h)
{
    return(l*h);
}

double FUN_AREA(float l,float b,float h)
{
    return(l*b*h);
}
double FUN_AREA()
{
    cout<<"\nNOT FIND AREA\n"<<endl;
}
int main()
{
    cout<<"\nAREA OF CIRCLE:"<<FUN_AREA(3.5f)<<endl;
    cout<<"\nAREA OF RECTANGLE: "<<FUN_AREA(3.5f, 6.2f)<<endl;
    cout<<"\nVolume of a cuboid "<<FUN_AREA(3.5f, 5.4f, 7.8f)<<endl;
    cout<<"\nNO ARGUMENT GIVEN:\n"<<FUN_AREA()<<endl;
    return 0;
}


