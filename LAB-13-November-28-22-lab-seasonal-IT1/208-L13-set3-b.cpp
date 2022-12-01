/*Write a program to create a class faculty which stores name, empid, address ,phoneno, Emailid, no of papers published, experience(in no of years), highest qualification.
Create a puretual function promotion() returning  a boolean value, in the class faculty.
Inherit class called assistant_professor, associate_professor and Professor from the class faculty. 
-Redefine the fun promotion in the assistant_professor to return true if experience > 3 years, no of papers >= 3 and highest qualification is "M.Tech".
-Redefine the fan promotion in the associate_professor to return true if experience > 5 years, no of papers >= 5 and highest qualification is "PhD". 
-Redefine the fun promotion in the Professor to return true if the experience is >= 7 years,highest qualification is "PhD" and no of PhD students under him.*/
//2105208_MILAN KUMAR SAHOO

#include <iostream>
#include <cctype>
#include <string.h>

using namespace std;

class faculty{
    protected:
    string name;
    int empid;
    string address;
    string phno;
    string mail;
    int noofpapers;
    int experience;
    char quali[20];
    public:
        void getdata(){
            cout<<"\n ENTER EMPID:";
            cin>>empid;
            cout<<"\nENTER NAME: ";
            cin.ignore();
            getline(cin,name);
            cout<<"\nENTER ADDRESS: ";
            cin.ignore();
            getline(cin,address);
            cout<<"\nENTER MAIL: ";
            cin.ignore();
            getline(cin,address);
            cout<<"\nENTER PHONE: ";
            cin.ignore();
            getline(cin,phno);
            cout<<"\n ENTER NO OF PUBLISHED PAPERS: ";
            cin>>noofpapers;
            cout<<"\n ENTER EXPERIENCE IN YEARS: ";
            cin>>experience;
            cout<<"\n ENTER QUALIFICATION IN BLOCKS LETTERS: ";
            cin.ignore();
            cin>>quali;
        }
        void show(){
            cout<<"\n"<<name<<"--"<<empid<<"--"<<address<<"--"<<phno<<"--"<<mail<<"--"<<noofpapers<<"--"<<experience<<"--";
            for(int i=0;quali[i]!='\0';i++){
                cout<<quali[i];
            }
        }
        virtual bool promotion()=0;

};

class assistant_prof: public faculty
{
    public:
        void getdata()
        {
            faculty::getdata();
        }
        bool promotion(){
            char gqa[20]="M.TECH";
            if(experience>=3 && noofpapers>=3){
                if(strcmp(gqa,quali)==0){
                    return true;
                }
                else{
                    return false;
                }
            }
            return false;
        }
        void show(){
            faculty::show();
        }

};
class associate_prof: public faculty{
    public:
        void getdata(){
            faculty::getdata();
        }
        bool promotion(){
            char gqa[20]="PHD";
            if(experience>=5 && noofpapers>=5){
                if(strcmp(gqa,quali)==0){
                    return true;
                }
                else{
                    return false;
                }
            }
            return false;
        }
        void show(){
            faculty::show();
        }

};
class prof: public faculty{
    protected:
        int noofphdstu;
    public:
        void getdata(){
            faculty::getdata();
            cout<<"\n ENTER NO. OF PHD STUDENTS: ";
            cin>>noofphdstu;
        }
        bool promotion(){
            char gqa[20]="PHD";
            if(experience>=5 && noofpapers>=5){
                if(strcmp(gqa,quali)==0){
                    if(noofphdstu>=3)
                        return true;
                    else
                        return false;
                }
                else{
                    return false;
                }
            }
            return false;
        }
        void show(){
            faculty::show();
            cout<<"--"<<noofphdstu;
        }

};
int main(){
    faculty* bptr;
    assistant_prof a1;
    associate_prof b1;
    prof c1;
    a1.getdata();
    b1.getdata();
    c1.getdata();
    cout<<"\n==DISPLAY==";
    a1.show();
    b1.show();
    c1.show();
    bptr=&a1;
    cout<<bptr->promotion();
    bptr=&b1;
    cout<<bptr->promotion();
    bptr=&c1;
    cout<<bptr->promotion();
    return 0;

}