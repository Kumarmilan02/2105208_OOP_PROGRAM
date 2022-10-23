//WAP to add two objects of distance class. Overload the operator ‘>’ to compare two objects
// and return the object with larger distance value and display it. 
//Overload the ‘==’ operator to compare and display whether two given objects contain same distance value.

#include <iostream>
using namespace std;

class Dist 
{
    int f,i;
    public:
    Dist(int fet=0,int in=0)
    {
        f=fet;
        i=in;
    }
    void disply()
    {
        cout << "Feet:" << f << "\t"
             << "Inches:" <<i<< endl;
    }
    Dist operator+(Dist& dist1)
    {
        Dist temp; // to add two distances
        temp.i=i+ dist1.i;
        temp.f=f+ dist1.f+ (temp.i/ 12);
        temp.i=temp.i % 12;
        return temp;
    }
    bool operator >(Dist d1);//member function
    friend bool operator ==(Dist &,Dist &);//friendfunction
};
bool Dist :: operator >(Dist d1)
{
    int dd1,dd2;
    dd1=(f*12)+i;
    dd2=(d1.f*12)+d1.i;
  return (dd1>dd2)?true:false;
}
bool operator ==(Dist &A,Dist &B)
{
    return(A.f==B.f && A.i==B.i);
}
int main()
{
    Dist D1(3,14), D2(4,13), D3,D4(3,14);
    D3 = D1 + D2;
    cout << "Total Distance:" << endl;
    D3.disply();
    if(D1>D2)
        cout<<"D1 is greater than D2"<<endl;
    else
        cout<<"D1 is smaller than D2"<<endl;
    
    if(D1==D4)
        cout<<"same value";
    else
        cout<<"different value";
     return 0;
}
