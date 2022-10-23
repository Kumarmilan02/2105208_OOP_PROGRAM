#include"iostream"
#include"string.h"
using namespace std;
class stud
{
    string name,course;
    int roll,age;
    public:
    void stud_data()
    {
        cout<<"Enter name: "<<endl;
        getline(cin,name);
        cout<<"Roll No.: "<<endl;
        cin>>roll;
        cout<<"Course taken: "<<endl;
        cin>>course;
        cout<<"Age:"<<endl;
        cin>>age;
    }
    void stud_display()
    {
        cout<<"\nDISPLAY\n";
        cout<<"\nNAME: "<<name<<"\nROLL NO: "<<roll<<"\nCOURSE: "<<course<<"\nAGE: "<<age;
    }      
};
class test:public stud
{
    int m[5];
    public:
    void test_data()
    {
        cout<<"Enter 5 marks: ";
        cin>>m[1]>>m[2]>>m[3]>>m[4]>>m[5];
    }
    int test_total()
    {
        return(m[1]+m[2]+m[3]+m[4]+m[5]);
    }
    void test_display()
    {
        for(int i=1;i<6;i++)
        {
            cout<<"\nmarks[i]: "<<m[i];
        }
        cout<<"\nTotal: "<<test_total();
    }
};
int main()
{
    test t;
    t.stud::stud_data();
    t.test_data();
    t.stud::stud_display();
    t.test_display();
}