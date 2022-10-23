#include"iostream"
#include"math.h"
using namespace std;
class DB;
class DM
{
    double meter, centimeter;
    public:
        void setData(double m , double cm) {
        meter = m;
        centimeter = cm;
    }
     friend void add (DM &x, DB &y);
};
class DB
{
    double feet, inches; 
    public:
        void setData(double f , double i) {
        feet = f;
        inches = i;}
       
    friend void add (DM &x, DB &y);
};

void add(DM &x, DB &y)
{
    double d1,d2;
    cout<<"\nEnter the distance in meter and centimeter:";
    cin>>x.meter>>x.centimeter;
    cout<<"\nEnter the distance in feet and inches:";
    cin>>y.feet>>y.inches;

    d1=x.meter+(y.feet)/3.281; 
    d2=x.centimeter+(y.inches)*2.54;
    cout<<"\nMeter + Feet = "<<d1<<" meter";
    cout<<"\nCentimeter + inches = "<<d2<<" centimeter";
}

int main()
{
    DM dm; 
    DB db;
    add(dm, db);
}