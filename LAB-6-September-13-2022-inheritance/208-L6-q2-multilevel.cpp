#include"iostream"
#include"string.h"
using namespace std;
class stud
{
    protected:
        string name;
        int roll,age;
    public:
    void stud_data()
    {
        cout<<"Enter name: "<<endl;
        getline(cin,name);
        cout<<"Roll No.: "<<endl;
        cin>>roll;
        cout<<"Age:"<<endl;
        cin>>age;
    }
    void stud_display()
    {
        cout<<"\nDISPLAY\n";
        cout<<"\n---------------------------\n";
        cout<<"\nNAME: "<<name<<"\nROLL NO: "<<roll<<"\nAGE: "<<age;
    }      
};
class test:public stud
{
    protected:
     int m[5];
    public:
    void test_data()
    {
        stud_data();
        cout<<"Enter 5 marks: ";
        cin>>m[0]>>m[1]>>m[2]>>m[3]>>m[4];
    }
    void test_display()
    {
        stud_display();
        for(int i=0;i<5;i++)
        {
            cout<<"\nmarks["<<i<<"]:"<<m[i];
        }
    }
};
class result:public test
{
    int tot;
    float perc;
    public:
    void getdata()
    {
        test_data();
    }
    void display()
    {
        test_display();
        tot=(m[0]+m[1]+m[2]+m[3]+m[4]);
        perc=tot/5.0;
        cout<<"\nToal marks: "<<tot<<"\nToatl Percentage: "<<perc<<"%";
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
    result r;
    r.getdata();
    r.display();
}