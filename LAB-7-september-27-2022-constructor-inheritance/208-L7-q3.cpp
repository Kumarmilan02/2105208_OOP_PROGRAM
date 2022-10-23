#include<iostream>
#include<string.h>
using namespace std;

class student
{ 
    protected:
        int roll_no,age;
        char name[20];
    public:
    student(int r,char *nm,int a)
    {
        cout<<"Student constructure is called: ";
        roll_no=r;
        age=a;
        strcpy(name,nm);
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
    Tests(int r,char *nm,int a,int m1,int m2,int m3):student(r,nm,a)
    {
        cout<<"\nMarks class constructor: ";
        marks[0]=m1;
        marks[1]=m2;
        marks[2]=m3;
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
    Activities(int r,char *nm,int a,int a1,int a2):student(r,nm,a)
    {
        cout<<"\nActivities class constructor: ";
        acts[0]=a1;
        acts[1]=a2;
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
    Result(int r,char *nm,int a,int m1,int m2,int m3,int a1,int a2):student(r,nm,a),Tests(r,nm,a,m1,m2,m3),Activities(r,nm,a,a1,a2)
    {

    }
    ~Result()
    {
        cout<<"\nDESTRUCCTOR CALLED";
    }
    void show()
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
    char nam[20];
    int roll_no,age,m1,m2,m3,a1,a2;
    cout<<"\nEnter name: ";
    cin>>nam;
    cout<<"Enter roll no: ";
    cin>>roll_no;
    cout<<"Age: ";
    cin>>age;
    cout<<"Enter 3 marks: ";
    cin>>m1>>m2>>m3;
    cout<<"Enter 2 activities: ";
    cin>>a1>>a2;

    Result R(roll_no,nam,age,m1,m2,m3,a1,a2);
    R.show_Stud_data();
    R.show();
}