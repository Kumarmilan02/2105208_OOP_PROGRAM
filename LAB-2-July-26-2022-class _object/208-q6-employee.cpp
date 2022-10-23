//CREATE A CLASS WHICH STORE ID,NAME,AGE AND BASIC SALARY OF A EMPLOYEE.
//INPUT DATA FOR N NUMBERS OF EMPLOYEE AND CALCULATE GROSS SALARY AND DISPLAY IT.
//GS=BS+DA+HRA [DA= 80% OF BS] [HRA= 10% OF BS]


#include <iostream>
using namespace std;
class emp
{
        private:

                int id;
                char name[50];
                int age;
                float bs;
                float gs;
        public:

                void getdata();
                void show();
};
void emp::getdata()
{

    cout<<"\n ENTER ID: ";
    cin>>id;
    cout<<"\n ENTER NAME: ";
    cin>>name;
    cout<<"\n ENTER AGE: ";
    cin>>age;
    cout<<"\n ENTER BASIC SALARAY:";
    cin>>bs;
    gs=bs+(0.8*bs)+(0.1*bs);
}

void emp::show()
{

    cout<<"\n ID: "<<id;
    cout<<"\n NAME: " <<name;
    cout<<"\n AGE: "<<age;
    cout<<"\n BASIC SALARY: "<<bs;
    cout<<"\n GROSS SALARY: "<<gs;
}
int main()
{

    int n,i;
    cout<<"\n ENTER NUMBER OF EMPLOYEES:";
    cin>>n;

    emp e[n];
    for(i=0;i<n;i++)
    {
        e[i].getdata();
    }
    for(i=0;i<n;i++)
    {
        e[i].show();
    }
    return 0;
}
