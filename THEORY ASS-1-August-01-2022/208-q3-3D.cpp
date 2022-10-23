//WAP using classes and objects to represent the vector in 3D space and include the member functions to perform the following tasks:
//  Create the vector.
//  Modify the value of a given axis.
//  Multiply by scalar value for a given axis.
//  Multiply by scalar value for all axes.
//  Display the vector in the form P(10, 20, 30).
//  Divide by scalar value for all axes.
//  Add by scalar value for all axes.

#include <iostream>
#include <stdio.h>
using namespace std;

class vector {
    int x;
    int y;
    int z;
public:
    void setCoord(int x1 , int y1 , int z1) {
        x = x1;
        y = y1;
        z = z1;
    }
    
    void show() {
        cout<<"P ( "<<x<<","<<y<<","<<z<<" )"<<endl;
    }
    
    void mod(int n , char c) {
        if(c == 'x' || c=='X') x = n;
        if(c == 'y' || c=='Y') y = n;
        if(c == 'z' || c=='Z') z = n;
    }
    
    void mulAx(int n , char c) {
        if(c == 'x' || c=='X') x *= n;
        if(c == 'y' || c=='Y') y *= n;
        if(c == 'z' || c=='Z') z *= n;
    }
    
    void mulAll(int n) {
        x*=n;
        y*=n;
        z*=n;
    }
    
    void divAll(int n) {
        x/=n;
        y/=n;
        z/=n;
    }
    
    void addAll(int n) {
        x+=n;
        y+=n;
        z+=n;
    }
};

int main()
{
    vector v1;
    int a,b,c;
    cout<<"\nEnter x,y,and z= ";
    cin>>a>>b>>c;
    v1.setCoord(a ,b  ,c );
    v1.mod(3,'y');
    v1.mulAx(2 , 'x');
    v1.mulAll(5);
    v1.divAll(4);
    v1.addAll(2);
    v1.show();
    return 0;
}