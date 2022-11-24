/*Create a class which stores employee name ,id and salary .
Derive two classes from 'Employee' class: Regular' and 'Part-Time'.
The 'Regular' class stores DA, HRA and basic salary. The 'Part-Time' class stores the number of hours and pay per hour.
Calculate the salary of a regular employee and a par-time employee, using virtual function*/

#include <iostream>
using namespace std;
class employee
{
	protected:
	char name[25];
	int id, salary, DA, HRA, hr, pph;
	public:
	void info()
	{
		cout << "\nEnter name : ";
		cin >> name;
		cout << "\nEnter ID : ";
		cin >> id;
	}
	void regular()
	{
		cout << "\nEnter salary : ";
		cin >> salary;
		cout << "\nEnter DA : ";
		cin >> DA;
		cout << "\nEnter HRA : ";
		cin >> HRA;
	}
	void part()
	{
		cout << "Enter number of hours : ";
		cin >> hr;
		cout << "Enter pay per hour : ";
		cin >> pph;
	}
	virtual void sal() = 0;
};
class regular : public employee
{
	public:
	void sal()
	{
		cout << "\nSalary of regular employee : " << salary + DA + HRA << endl;
	}
};
class part : public employee
{
	public:
	void sal()
	{
		cout << "\nSalary of Part-time employee : " << pph * hr * 30 << endl;
	}
};
int main()
{
	regular r;
	employee *er = &r;
	er->info();
	er->regular();
	er->sal();
	part p;
	employee *ep = &p;
	ep->info();
	ep->part();
	ep->sal();
	return 0;
}