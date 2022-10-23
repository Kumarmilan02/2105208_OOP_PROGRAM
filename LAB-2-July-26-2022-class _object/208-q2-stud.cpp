///WAP TO CREATE CLASS STUDENT  OF NAME,ROLL,MARKS AND DISPLAY IT.

#include "iostream"
using namespace std;
class student
{
        private:
        char name[30];
        int roll;
        int total;
        public:
        void getdata()
        {
                cout<<"Enter name:";
                cin>>name;
                cout<<"Enter roll number:";
                cin>>roll;
                cout<<"Enter total marks:";
                cin>>total;
        }
        void putdata()
        {
                cout<<"student details:";
                cout<<endl;
                cout<<"Name of student:"<<name;
                cout<<endl;
                cout<<"Roll number of the student:"<<roll;
                cout<<endl;
                cout<<"Totalmarks of student:"<<total;
                cout<<endl;
        }
};
int main()
{
        student obj;
        obj.getdata();
        obj.putdata();
        return 0;
}

