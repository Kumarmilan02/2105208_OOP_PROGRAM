//Write overloaded functions to find the perimeter of circle, rectangle and triangle.

#include <iostream>
#include <string.h>
using namespace std;

float per(float r){
    return (3.14*2*r);
}
float per(float r, float h){
    return (2*(r+h));
}
float per(float l, float b,float h){
    return(l+h+b);
}

int main(){
    float a,b,c;
    cout<<"\n ENTER RADIUS: ";
    cin>>a;
     cout<<"\n PERIMETER OF CIRCLE: "<<per(a);
    cout<<"\n ENTER LENGTH AND BREADTH OF RECTANGLE: ";
    cin>>a>>b;
    cout<<"\n PERIMETER OF RECTANGLE: "<<per(a,b);
    cout<<"\n ENTER 3 SIDES: ";
    cin>>a>>b>>c;
    cout<<"\n VOLUME OF CUBOID: "<<per(a,b,c);
    return 0;

    
}