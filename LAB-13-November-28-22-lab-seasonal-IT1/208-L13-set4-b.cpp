/*(B)Write a program to create a class called student to store the name, rollno, phone COPA and semester of a student. 
Inherit a class called hostel dues having data members as rental_fees/semester, Mess_dues/month, laundry_dues/month. 
Inherit another class called academic dues having data members as registration fees, tuition fees/semester and examination dues/semester. 
Create a class called total fees to calculate the total fees paid by an student in a year. 
[If the CGPA of the student is 10. then 10% discount is given on the total fees to be paid.]*/
//2105208_MILAN KUMAR SAHOO


#include "iostream"
using namespace std;

class student
{
protected:
    char nm[20];
    int roll;
    long int ph;
    float cgpa;
    int sem;

public:
    void getdata()
    {
        cout << "\nName: ";
        cin >> nm;
        cout << "\nRoll: ";
        cin >> roll;
        cout << "\nphone:";
        cin >> ph;
        cout << "\nCGPA: ";
        cin >> cgpa;
        cout << "\nsemester: ";
        cin >> sem;
    }
    void display()
    {
        cout << "\nName: " << nm << "\nRoll: " << roll<<"\nphone: " << ph << "\nCGPA:  " << cgpa << "\nsemester: " << sem;
    }
};
class hostel : virtual public student
{
    int hostelfee, messfee, lundry, mess_sem, l_sem;

public:
    void getdata()
    {
        cout << "\nhostelfee/sem: ";
        cin >> hostelfee;
        cout << "\nmessfees/month: ";
        cin >> messfee;
        cout << "\nlunderyfee/month:";
        cin >> lundry;
    }
    int addhostel()
    {
        mess_sem = messfee * 6;
        l_sem = lundry * 6;
        return (hostelfee + mess_sem + l_sem);
    }
    void display()
    {
        cout << "\nhostelfee/sem: " << hostelfee << "\nmessfees/month: " << messfee << "\nlunderyfee/month:" << lundry;
        cout << "\nTotal hoselfees/sem: " << addhostel();
        cout << "\n";
    }
};
class academy : virtual public student
{
    int regfee, semfee, examfee;

public:
    void getdata()
    {
        cout << "\nregistrationfee/sem: ";
        cin >> regfee;
        cout << "\nsemester fee: ";
        cin >> semfee;
        cout << "\nexam fee/sem:";
        cin >> examfee;
    }
    int addfee()
    {
        return (regfee + semfee + examfee);
    }
    void display()
    {
        cout << "\nregistrationfee/sem: " << regfee << "\nsemester fee: " << semfee << "\nexam fee/sem:" << examfee;
        cout << "\nTOTAL acdemy fee/sem: " << addfee() << "\n";
    }
};
class Totalfee : public hostel, public academy
{
public:
    void show()
    {
        student::getdata();
        hostel::getdata();
        academy::getdata();
        student::display();
        hostel::display();
        academy::display();
        if(cgpa==10)
        {
            cout << "\nTOTAL FEES PER SEM: " << (addhostel() + addfee());
            cout << "\nTOTAL FEES PER YEAR: " << ((2 * (addhostel() + addfee()))-(0.2 * (addhostel() + addfee())));
        }
        else
        {
            cout << "\nTOTAL FEES PER SEM: " << (addhostel() + addfee());
            cout << "\nTOTAL FEES PER YEAR: " << (2 * (addhostel() + addfee()));
        }
    }
};
int main()
{
    Totalfee t;
    t.show();
    return 0;
}