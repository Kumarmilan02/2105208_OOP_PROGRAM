/*Write a program to create a class called person,that stores his/her name, address, phone no and salary. 
-Inherit [from person class] a class called household expenditure that stores his/her electricity bill amount, 
bill paid to the milkman is calculated based on number of litres milk taken and the rate/litre, salaries paid to the household helpers. 
-Inherit [from person class] another class called extra expenditure that stores amount of loan paid, travelling cost and other miscellaneous cost. 
-Next inherit a class called total expenditure that stores the total expenditure incurred by the person. 
-Include a member function in that class to check if the total expenditure is greater than 50% of
the salary of the person, then it raises an appropriate exception.*/
//2105208_MILAN KUMAR SAHOO

#include <iostream>
using namespace std;

class person{
    char name[50],add[50];
    int ph,sal;
public:
    void get(){
        cout<<"Enter name,address,ph,sal: ";
        cin>>name>>add>>ph>>sal;
    }
    void show(){
        cout<<"\nName "<<name<<"\naddress "<<add<<"\nPhone num "<<ph<<"\nsalary "<<sal<<endl;
    }
    int getsal(){
        return sal;
    }
};

class he:public virtual person{
    int ele,rate,milk,hsal;
public:
    void get1(){
        cout<<"Enter electricity bill,Milk amount,house sal ";
        cin>>ele>>rate>>hsal;
        milk=20*rate;
    }
    void show1(){
        cout<<"\nelectricity bill "<<ele<<"\nMilk "<<milk<<"\nhouse sal"<<hsal<<endl;
    }
    int gets2(){
        return (ele+milk+hsal);
    }
};

class ee:public virtual person{
    int loan,tc,misc;
public:
    void get2(){
        cout<<"Enter loan paid,traveling cost,Misc ";
        cin>>loan>>tc>>misc;
    }
    void show2(){
        cout<<"\nloan paid "<<loan<<"\ntraveling cost "<<tc<<"\nMisc"<<misc<<endl;
    }
    int gets1(){
        return (loan+tc+misc);
    }
};

class tot: public he, public ee{
    int total;
public:
    void gett(){
        get();
        get1();
        get2();
        total= gets1()+gets2();
    }

    void showw(){
        show();
        show1();
        show2();
        cout<<"\nTotal exp"<<total<<endl;
    }
    void check(){
        if(total>getsal()){
            cout<<"red exp";
        } else
            cout<<"good";
    }


};

int main() {
    tot t1;
    t1.gett();
    t1.showw();
    t1.check();
    return 0;
}