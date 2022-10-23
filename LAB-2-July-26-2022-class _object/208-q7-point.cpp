//CREATE CLASS WHICH STORE X AND Y CO-ORDINATE OF POINT.
//WAP TO CALCULATE DISTANCE BETWEEN TWO POINTS AND DISPLAY IT.

#include <iostream>
#include <math.h>
using namespace std;
class point
{
        private: double x;

                double y;

        public:

                void getdata(double a,double p);
                 void calc(point a, point b);
};

void point ::getdata(double a, double b)
{
        x=a;
        y=b;
}

void point ::calc(point a, point b)
{

        double dist;
        dist=sqrt(pow((a.x-b.x), 2)+pow((a.y-b.y),2));

        cout<<"The distance :"<<dist;
}

int main()
{
        point p1,p2,p3;
        int a,b,c,d;

        cout<<"\n ENTER X1:";
        cin>>a;

        cout<<"\n ENTER Y1: ";
        cin>>b;

        cout<<"\n ENTER X2:";
        cin>>c;

        cout<<"\n ENTER Y2:";
        cin>>d;

        p1.getdata(a,b);

        p2.getdata(c,d);

        p3.calc(p1, p2);
        return 0;
}
