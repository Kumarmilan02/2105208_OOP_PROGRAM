//WAP TO MODIFY Q2 TO STORE MARKS IN 5 SUBJECTS.
//CALCULATE TOTAL MARKS AND PERCENTAGEOF STUDENT AND DISPLAY IT.

#include "iostream"
using namespace std;
class student
{
        private:
        char name[30];
        int roll;
        float marks[5];
        float total;
        float perc;
        public:
        void getdata()
        {
                cout<<"Enter name:";
                cin>>name;
                cout<<"Enter roll number:";
                cin>>roll;
                for(int i=0;i<5;i++)
                {
                        cout<<"Ente marks:"<<i+1<<":";
                        cin>>marks[i];
                }
        }
        void putdata()
        {       int i;
                cout<<"student details:";
                cout<<endl;
                cout<<"Name of student:"<<name;
                cout<<endl;
                cout<<"Roll number of the student:"<<roll;
                cout<<endl;
                for(i=0;i<5;i++)
                {
                        total+=marks[i];
                }
                cout<<"Totalmarks of student:"<<total<<endl;
                cout<<"\npercentage:"<<(total/5)<<"%"<<endl;
        }
};
int main()
{
        student obj;
        obj.getdata();
        obj.putdata();
        return 0;
}

