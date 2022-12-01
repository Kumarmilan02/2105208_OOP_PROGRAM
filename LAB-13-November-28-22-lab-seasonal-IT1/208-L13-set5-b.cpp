/*[B]Write a program to create a class called person, that stores his/her name, address, phone no and salary. 
Inherit [from person class] a class called household expenditure that stores his/her electricity bill amount, bill paid to the milkman is calculated based on number of litres milk taken and the rate/litre, salaries paid to the household helpers.
Inherit [from person class] another class called extra expenditure that stores amount of loan paid, travelling cost and other miscellaneous cost. 
Next inherit a class called total expenditure that stores the total expenditure incurred by the person.*/
//2105208_MILAN KUMAR SAHOO

#include "iostream"
using namespace std;
class person
{
    protected:
        char nm[20];
        float sal;
        int ph;
        char add[20];
    public:
        void getdata()
        {
            cout<<"\nname: ";
            cin>>nm;
            cout<<"\nPHONe: ";
            cin>>ph;
            cout<<"\naddress: ";
            cin>>add;
            cout<<"\nsalary: ";
            cin>>sal;
        }
        void show()
        {
            cout<<"\nNAME: "<<nm<<"\nph no: "<<ph<<"\nADDRESS: "<<add<<"\nSALARY: "<<sal<<endl;
        }
};
class expend:virtual public person
{
    float bill,saly;
    int lit,rate,day,milkbill;
    public:
        void getdata()
        {
            //person::getdata()
            cout<<"\nENTER electric bill: ";
            cin>>bill;
            cout<<"\nENETR milk per lit,rate/lit and day: ";
            cin>>lit>>rate>>day;
            milkbill=lit*rate*day;
            cout<<"\nSALARY for household: ";
            cin>>saly;
        }
        int addb()
        {
            return(bill+saly+milkbill);
        }
        void show()
        {
            //person::show();
            cout<<"\nElectric bill: "<<bill<<"\nMILK bill: "<<milkbill<<"\nhousehold Salary: "<<saly;
            cout<<"\nTATAO EXPAND: "<<addb();
            cout<<"\n";
        }
};
class exterexpend:virtual public person
{
    float loan,tcost,otherc;
    public:
    void getdata()
    {
        cout<<"\nEnter loan paid: ";
        cin>>loan;
        cout<<"\ntravelling cost: ";
        cin>>tcost;
        cout<<"\nOther cost: ";
        cin>>otherc;
    }
    int adda()
    {
        return(loan+tcost+otherc);
    }
    void show()
    {
        cout<<"\nloan paid: "<<loan<<"\nTRAVELING cost: "<<tcost<<"\nother cost: "<<otherc;
        cout<<"\ntotal Extraexpand: "<<adda();
        cout<<"\n";
    }

};
class totalexpand:public expend , public exterexpend
{
    public:
    void display()
    {
        person::getdata();
        expend::getdata();
        exterexpend::getdata();
        person::show();
        expend::show();
        exterexpend::show();
        cout<<"\nTOTAL EXPENDITURE COST: "<<(adda()+addb());
        cout<<"\n";
    }
};
int main()
{
    totalexpand t;
    t.display();
    return 0;
}