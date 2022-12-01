/*Write a program to create a class employeewhich stores name, empid, no of projects worked on, experience(in no of years), highest qualification, designation and salary.
-Create a pure virtual function promotion() in the class called employee. 
-Inherit the classes called software engineer, senior_software_engineer and Project Manager from the class employee.
-Redefine the function promotion in the class software engineer) to change the designation to "SSR" and Increment the salary by 20% of the present salary if the experience is >= 2 years, no of projects completed >=5 and highest qualification is "B.Tech".
-Redefine the function promotion in the senior_software engineer to change the designation to "PM" and increment the salary by 40% of the present salary if the experience is >= 3 years, no of projects completed >-9 and highest qualification is "B.Tech".
-Redefine the function promotion in the Project Manager to change the designation to "DM" and increment the salary by 50% of the present salary if the experience is >= 4 years, no of projects completed >=12 and highest qualification is "MBA".*/
//2105208-MILAN KUMAR SAHOO


#include <iostream>
#include <cctype>
#include <string.h>

using namespace std;

class employee
{
protected:
    string name;
    int empid;
    int noofpro;
    int experience;
    char quali[30];
    string desig;
    float salary;

public:
    void getdata()
    {
        cout << "\n ENTER EMPID:";
        cin >> empid;
        cout << "\nENTER NAME: ";
        cin.ignore();
        getline(cin, name);
        cout << "\n ENTER NO. OF PROJECTS: ";
        cin >> noofpro;
        cout << "\n ENTER EXPERIENCE IN YEARS: ";
        cin >> experience;
        cout << "\n ENTER QUALIFICATION: ";
        cin.ignore();
        cin >> quali;
        cout << "\n ENTER PRESENT DESGINATION: ";
        cin.ignore();
        getline(cin, desig);
        cout << "\n ENTER SALARY: ";
        cin >> salary;
    }
    void show()
    {
        cout << "\n"
             << name << "--" << empid << "--" << noofpro << "--" << experience << "--";
        for (int i = 0; quali[i] != '\0'; i++)
        {
            cout << quali[i];
        }
        cout << "--" << desig << "--" << salary;
    }
    virtual void promotion() = 0;
};

class software_engineer : public employee
{
public:
    void getdata()
    {
        employee::getdata();
    }
    void promotion()
    {
        char gqa[30] = "B.Tech";
        if (experience >= 2 && noofpro >= 5)
        {
            if (strcmp(gqa, quali) == 0)
            {
                desig = "SSR";
                salary = salary + (0.2 * salary);
            }
        }
    }
    void show()
    {
        employee::show();
    }
};
class senior_software_engineer : public employee
{
public:
    void getdata()
    {
        employee::getdata();
    }
    void promotion()
    {
        char gqa[30] = "B.Tech";
        if (experience >= 3 && noofpro >= 9)
        {
            if (strcmp(gqa, quali) == 0)
            {
                desig = "PM";
                salary = salary + (0.4 * salary);
            }
        }
    }
    void show()
    {
        employee::show();
    }
};
class Project_Manager : public employee
{
public:
    void getdata()
    {
        employee::getdata();
    }
    void promotion()
    {
        char gqa[30] = "MBA";
        if (experience >= 4 && noofpro >= 12)
        {
            if (strcmp(gqa, quali) == 0)
            {
                desig = "DM";
                salary = salary + (0.5 * salary);
            }
        }
    }
    void show()
    {
        employee::show();
    }
};
int main()
{
    employee *bptr;
    software_engineer a1;
    senior_software_engineer b1;
    Project_Manager c1;
    a1.getdata();
    b1.getdata();
    c1.getdata();
    cout << "\n==DISPLAY BEFORE PROMOTION==";
    a1.show();
    b1.show();
    c1.show();
    bptr = &a1;
    bptr->promotion();
    bptr = &b1;
    bptr->promotion();
    bptr = &c1;
    bptr->promotion();
    cout << "\n==DISPLAY AFTER PROMOTION==";
    a1.show();
    b1.show();
    c1.show();
    return 0;
}