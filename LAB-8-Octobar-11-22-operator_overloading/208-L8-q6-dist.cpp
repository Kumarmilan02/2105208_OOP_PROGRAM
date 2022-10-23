//WAP to add two objects of distance class. Overload the operator ‘>’ to compare two objects
// and return the object with larger distance value and display it. 
//Overload the ‘==’ operator to compare and display whether two given objects contain same distance value.

#include <iostream>
using namespace std;

class Distance 
{
    int f,i;
    public:
    void readDistance(void)
    {
        cout << "Enter feet: ";
        cin >> f;
        cout << "Enter inches: ";
        cin >> i;
    }
    void dispDistance(void)
    {
        cout << "Feet:" << f << "\t"
             << "Inches:" <<i<< endl;
    }
    Distance operator+(Distance& dist1)
    {
        Distance tempD; // to add two distances
        tempD.i=i+ dist1.i;
        tempD.f=f+ dist1.f+ (tempD.i/ 12);
        tempD.i=tempD.i % 12;
        return tempD;
    }
    friend bool operator >(Distance d1, Distance d2);
    friend bool operator ==(Distance &,Distance &);
};
bool operator >(Distance d1,Distance d2)
{

  int dd1=(d1.f*12)+d1.i;
  int dd2=(d2.f*12)+d2.i;
  return (dd1>dd2);
}
bool operator ==(Distance &A,Distance &B)
{
    return(A.f==B.f && A.i==B.i);
}
int main()
{
    Distance D1, D2, D3,D4;
    cout << "Enter first  distance:" << endl;
    D1.readDistance();
    cout << "Enter second distance:" << endl;
    D2.readDistance();
    D3 = D1 + D2;
    cout << "Total Distance:" << endl;
    D3.dispDistance();
    D4.readDistance();
    D4.dispDistance();
    D4.dispDistance();
    if(D1>D2)
        cout<<"D1 is greater than D2"<<endl;
    else
        cout<<"D1 is smaller than D2"<<endl;
    
    if(D1==D4)
        cout<<"same";
    else
        cout<<"different";
     return 0;
}
