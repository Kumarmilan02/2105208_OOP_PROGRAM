//WAP to find volume of a sphere, a cylinder and a cuboid, using function overloading

#include<iostream>
    using namespace std;
    double vol(float,float);
    double vol(float);
    double vol(float,float,float);

    int main()
    {
         float r1,r,h,l,b,h1;
        cout<<"Enter radius and height of a cylinder:";
        cin>>r>>h;
        cout<<"Enter side of cube in length,breath,height:";
        cin>>l>>b>>h1;
        cout<<"Enter radius of sphere: ";
        cin>>r1;
        cout<<"Volume of cylinder is "<<vol(r,h)<<endl;
        cout<<"\nVolume of cube is "<<vol(l,b,h1)<<endl;
        cout<<"\nVolume of sphere is "<<vol(r1)<<endl;
        return 0;
    }
    double vol(float r,float h)
    {
        return(3.14*r*r*h);
    }
    double vol(float r1)
    {
        return((4*3.14*r1*r1*r1)/3);
    }
    double vol(float l,float b ,float h1)
    {
        return(l*b*h1);
    }
