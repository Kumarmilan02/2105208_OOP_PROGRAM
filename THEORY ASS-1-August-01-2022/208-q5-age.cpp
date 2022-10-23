//WAP that uses a date structure within a class. Enter any date and your birth date. 
//The program must display your exact age in years, months and days.

#include <iostream>
#include <stdlib.h>
using namespace std;

class age {
    struct date {
        int dd;
        int mm;
        int yy;
    } curr,dob;
public:
    void setDOB(int d , int m , int y) {
        dob.dd = d;
        dob.mm = m;
        dob.yy = y;
    }
    void setCurr(int d , int m , int y) {
        curr.dd = d;
        curr.mm = m;
        curr.yy = y;
    }
    void calc() {
        int days,months,year;
        year = abs(curr.yy - dob.yy);
        {
            if(curr.mm<dob.mm)
            {
                year=year-1;
                months = abs(12+curr.mm - dob.mm);
            }
            else
            {  
                months = abs(curr.mm - dob.mm);
            }
        }
        {
            if(curr.dd<dob.dd)
            {
                months=months-1;
                days=abs(30+curr.dd-dob.dd);
            }
            else
               days= abs(curr.dd-dob.dd);
        }
        cout<<"Your current age is "<<days<<" days "<<months<<" months "<<year<<" years \n";
    }
};

int main()
{   
    age p1;
    int d , m , y;
    cout<<"enter DOB\n";
    cin>>d>>m>>y;
    p1.setDOB(d , m , y);
    cout<<"enter current date\n";
    cin>>d>>m>>y;
    p1.setCurr(d , m , y);
    p1.calc();
    return 0;
}