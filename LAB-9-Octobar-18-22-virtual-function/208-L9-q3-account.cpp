//

#include <iostream>
using namespace std;

class account
{
    private:
        char name[40];
        int act_no;
        float bnk_bal;
    public:
        void initialize();
        void debit();
        void deposit();
        void show();

};

void bank::initialize(){
    bnk_bal=0;
    float a;
    cout<<"\n ENTER THE AMOUNT YOU WANT TO START WITH: ";
    cin>>a;
    if(a<1000){
        cout<<"\n SORRY YOUR BANK ACCOUNT CAN'T BE INITIALISED ";
    }
    else{
        cout<<"\n CONGRATULATIONS YOUR BANK ACCOUNT CAN BE CREATED. ";
        cout<<"\n ENTER NAME OF ACCOUNT HOLDER: ";
        cin>>name;
        bnk_bal=a;
        act_no=rand();
        cout<<"\n Enter account type:";
        cin>>act_type;
        show();
        cout<<"\n---------------";
    }
}
void bank::deposit()
{
    int d1;
    cout<<"\n Enter deposit amount: ";
    cin>>d1;
    bnk_bal+=d1;
    cout<<"\nAMOUNT DEPOSITED.";
    show();
    cout<<"\n---------------";
}
void bank::show(){
    cout<<"\n ---------";
    cout<<"\n NAME OF ACCOUNT HOLDER: "<<name;
    cout<<"\n ACCOUNT NUMBER: "<<act_no;
    cout<<"\n ACCOUNT TYPE: "<<act_type;
    cout<<"\n CURRENT BANK BALANCE: "<<bnk_bal;
    cout<<"\n---------------";
}
void bank::debit(){
    float a;
    cout<<"\nENTER THE AMOUNT YOU WANT TO WITHDRAW:  ";
    cin>>a;
    if((bnk_bal-a)>500){
        bnk_bal=bnk_bal -a;
        cout<<"\nAMOUNT:  "<<a<<" DEBITTED ";
    }
    else{
        cout<<"\n BALANCE LIMIT IS EXCEEDED. ";
    }
    show();
    cout<<"\n---------------";


}

int main(){
    int a,b,c,d;
    bank b1;
    while (1){
        cout<<"\n WELCOME TO MINI BANK: ";
        cout<<"\n 1.INITIALISE";
        cout<<"\n 2.DEBIT";
        cout<<"\n 3.DEPOSIT ";
        cout<<"\n 4.SHOW DETAILS ";
        cout<<"\n 5.EXIT";
        cout<<"\n ENTER YOUR CHOICE: 1/2/3/4/5 : ";
        cin>>a;
        if(a==1){
            b1.initialize();
        }
        else if (a==2){
            b1.debit();
        }
        else if (a==3){
            b1.deposit();
        }
        else if (a==4){
            b1.show();
        }
        else if(a==5){
            break;
        }
    }
}    





