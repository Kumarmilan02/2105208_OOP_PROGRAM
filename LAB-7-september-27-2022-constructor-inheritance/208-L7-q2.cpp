#include"iostream"
#include"string.h"
using namespace std;
class stud
{
    string name,course;
    int roll,age;
    public:
    stud(string nm,string cs,int r,int ag)
    {
        name=nm;
        course=cs;
        roll=r;
        age=ag;
    }
    void stud_display()
    {
        cout<<"\nDISPLAY\n";
        cout<<"\nNAME: "<<name<<"\nROLL NO: "<<roll<<"\nCOURSE: "<<course<<"\nAGE: "<<age;
    }      
};
class test:public stud
{
    protected:
    int m[5];
    float perc;
    public:
    test(string nm,string cs,int r,int ag,int *ar):stud(nm,cs,r,ag)
    {
         for(int i=0;i<5;i++)
        {
            m[i]=ar[i];
        }
    }
    ~test()
    {
        cout<<"\nDESTRUCTOR CALLED";
    }
    int test_total()
    {
        return(m[0]+m[1]+m[2]+m[3]+m[4]);
    }
    void test_display()
    {
        for(int i=0;i<5;i++)
        {
            cout<<"\nmarks:"<<m[i];
        }
        perc=test_total()/5.0;
        cout<<"\nToal marks: "<<test_total()<<"\nToatl Percentage: "<<perc<<"%";
        switch(test_total()/50)
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
    string name,course;
    int roll,age,m[5];
    cout<<"Enter name: "<<endl;
    getline(cin,name);
    cout<<"Roll No.: "<<endl;
    cin>>roll;
    cout<<"Course taken: "<<endl;
    cin>>course;
    cout<<"Age:"<<endl;
    cin>>age;
    cout<<"Enter 5 marks: ";
    for(int i=0;i<5;i++)
    {
        cin>>m[i];
    }
    test t(name,course,roll,age,m);    
    t.stud::stud_display();
    t.test_display();
    return 0;
}