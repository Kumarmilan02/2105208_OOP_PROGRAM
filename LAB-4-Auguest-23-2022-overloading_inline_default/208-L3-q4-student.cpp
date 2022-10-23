//Create a class which stores name, roll number and oop marks for a student. Input data for n students. 
//Find the average marks scored by n students, store it as a data member of the class.
//display it using a function which may be called without object.

#include <iostream>
using namespace std;
class Stud
{
    private:
        string name;
        int roll;
        float oop;
        static float avg;
    public:
        void getdetails()
        {
                cout<<"\nEnter details for student "<<": ";
                cout<<"\nName: ";
                cin>>name;
                cout<<"Roll no: ";
                cin>>roll;
                cout<<"oop marks: ";
                cin>>oop;
        }
        void show()
        {
            cout<<"\nNAME: "<<name<<"\nROLLL NO.: "<<roll<<"\nOOP MARKS: "<<oop<<endl;
        }
        float marks()
        {
            return oop;
        }
        static void average(float d)
        {
            avg=d;
            cout<<"\nTOATL AVERAGE: "<<avg;
        }
};
float Stud::avg=0;
int main()
{
    int i,n;
    cout<<"\nEnter the number of student: ";
    cin>>n;
    Stud s1[n];
    for(i=0;i<n;i++)
    {
        s1[i].getdetails();
    }
    float count=0.0;
    for(i=0;i<n;i++)
    {
        count+=s1[i].marks();
    }
    for(i=0;i<n;i++)
    {
        s1[i].show();
        cout<<"\n";
    }
    count=count/n;
    Stud::average(count);
    return 0;
}