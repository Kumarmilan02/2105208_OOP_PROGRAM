#include<iostream>
#include<string.h>
using namespace std;

class student
{ 
    protected:
        int roll_no,age;
        char name[20];
    public:
    void get_Stud_data()
    {
        cout<<"\nEnter the roll_number: ";
        cin>>roll_no;
        cout<<"\nEnter the name: ";
        cin.ignore();
        cin.getline(name,20);
        cout<<"Age:"<<endl;
        cin>>age;
    }
    void show_Stud_data()
    {
        cout<<"\nDISPLAY";
        cout<<"\n-----------------------";
        cout<<"\nRoll number: "<<roll_no;
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
    }
};
class Tests:virtual public student
{ 
    protected:
        int marks[3];
    public:
    void get_Marks()
    {
        cout<<"\nEnter the marks in three tests out 100 : ";
        cin>>marks[0]>>marks[1]>>marks[2];
    }
    int total_marks()
    {
        return(marks[0]+marks[1]+marks[2]);

    }
};
class Activities:virtual public student
{ 
    protected:
    int acts[2];
    public:
    void get_Acts_Score()
    {
        cout<<"\nEnter the score in two activities 0ut 100: ";
        cin>>acts[0]>>acts[1];
    }
    int total_score()
    {
        return(acts[0]+acts[1]);
    }
};
class Result: public Tests, public Activities
{ 
    int tot;
    float perc;
    int grade;
    public:
    void show_total()
    {
        tot=total_marks() + total_score();
        cout<<"\nTOTAL: "<<tot;
        perc=(tot/500.0)*100;
        cout<<"\nPERCENTAGE IS: "<<perc<<"%\n";
        switch(tot/50)
        {
            case 10:
            case 9:
                cout<<"\nGrade: O";
                break;
            case 8:
                cout<<"\nGrade: E";
                break;
            case 7:
                cout<<"\nGrade: A";
                break;
            case 6:
                cout<<"\nGrade: B";
                break;
            case 5:
                cout<<"\nGrade: C";
                break;
            case 4:
                cout<<"\nGrade: D";
                break;
            default:
                cout<<"\nGrade: F";
                break;
        }
    }
};
int main()
{
    Result R;
    R.get_Stud_data();
    R.get_Marks();
    R.get_Acts_Score();
    R.show_Stud_data();
    R.show_total();
}