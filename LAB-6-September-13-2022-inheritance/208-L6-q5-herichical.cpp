//HEIRARCHICAL INHERITANCE 

#include <iostream>
using namespace std;

class employee{
    protected:
        string name;
        int id;
        float sly;
    public:
        void input(){
            cout<<"\n Enter Name/ID: \n";
            cin>>name;
            //getline(cin,name);
            cin>>id;
        }
};
class regular:public employee{
    protected:
    float da;
    float hra;
    float basic;
    public:
        void input(){
            employee::input();
            cout<<"\n ENTER BASIC SALARY";
            cin>>basic;
            cout<<"\n ENTER PERCENTAGE FOR HRA: ";
            cin>>hra;
            cout<<"\n ENTER PERCENTAGE FOR DA: ";
            cin>>da;
            sly=basic+(((hra)/100)*basic)+((da/100)*basic);
        }
        void display(){
            cout<<"\n FOR REGULAR: \n";
            cout<<"\nID\t\tNAME\t\tSALARY\n";
            cout<<"========\t\t=========\t\t==========\n";
            cout<<"\n"<<id<<"\t\t"<<name<<"\t\t"<<sly;
        }
};
class parttime:public employee{
    protected:
    int hrs;
    float pph;
    public:
        void input(){
            employee::input();
            cout<<"\n ENTER NO. OF HOURS: ";
            cin>>hrs;
            cout<<"\n ENTER PAY PER HOUR: ";
            cin>>pph;
            sly=hrs*pph;
        }
        void display(){
            cout<<"\n FOR PART TIME: \n";
            cout<<"\nID\t\tNAME\t\tSALARY\n";
            cout<<"========\t\t=========\t\t==========\n";
            cout<<"\n"<<id<<"\t\t"<<name<<"\t\t"<<sly;
        }
};

int main(){
    regular r;
    parttime p;
    r.input();
    p.input();
    r.display();
    p.display();
    return 0;
}