/*WAP to demonstrate use of pure virtual function and abstract base class.
[ May use the decimal class as base and hexadecimal, octal and binary as derived classes]*/
/*METHOD 2*/

#include <iostream>
using namespace std;
class number
{
protected:
    int val;

public:
    void setval(int i) // abstract class
    {
        val = i;
    }
    virtual void show() = 0;
};
class hextype : public number
{
public:
    void show()
    {
        cout << hex << val << endl;
    }
};
class dectype : public number
{
public:
    void show()
    {
        cout << val << endl;
    }
};
class octtype : public number
{
public:
    void show()
    {
        cout << oct << val << endl;
    }
};
int main()
{
    number *ptr;
    dectype d;
    hextype h;
    octtype o;
    ptr = &d;

    ptr->setval(20);
    ptr->show();
    ptr = &o;
    ptr->setval(20);

    ptr->show();
    ptr = &h;
    ptr->setval(20);
    ptr->show();
}
