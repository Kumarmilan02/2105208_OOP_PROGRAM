//Write overloaded functions to find the area of scalene, isosceles and equilateral triangle.
//Area of scalene triangle = √(s(s-a)(s-b)(s-c))
//Area of isosceles triangle = ½[√(a^2 − b^2/4)*b]
//Area of equilateral triangle= (√3/4)a*2

#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

float area(float r){
    return ((sqrt(3)/4.0)*(r*r));
}
float area(float h, float r){
    return (0.5*h*sqrt((r*r)-((h*h)/4.0)));
}
float area(float l, float b,float h){
    float s=(l+b+h)/2;
    return (sqrt((s)*(s-l)*(s-b)*(s-h)));
}

int main(){
    float a,b,c;
    cout<<"\n ENTER SIDE FOR EQUI. TRAINGLE: ";
    cin>>a;
     cout<<"\n Area of Equilateral Triangle: "<<area(a);
    cout<<"\n ENTER TWO SIDES OF ISOSCELES TRIANGLE: ";
    cin>>a>>b;
    cout<<"\n AREA OF ISOSCELES TRIANGLE: "<<area(a,b);
    cout<<"\n ENTER 3 SIDES: ";
    cin>>a>>b>>c;
    cout<<"\n AREA OF SCALENE TRIANGLE: "<<area(a,b,c);
    return 0;

    
}