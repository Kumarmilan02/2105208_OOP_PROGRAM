/*WAP to demonstrate use of pure virtual function and abstract base class.
[ May use the decimal class as base and hexadecimal, octal and binary as derived classes]*/
/*METHOD 1*/

#include <iostream>
using namespace std;

class Decimal //Abstract class
{
    protected:
        int initial;
    public:
    int getinit()
    {
        cout << "\nEnter decimal number: ";
        cin >> initial;
        return initial;
    }
    virtual void compute() = 0;
};
class Hexadecimal : public Decimal
{
    public:
    void compute()
    {
        int n = getinit();
        char Num[100];
        int x = 0;
        while (n != 0)
        {
            int temp = 0;
            temp = n % 16;
            if (temp < 10)
            {
                Num[x] = temp + 48;
                x++;
            }
            else
            {
                Num[x] = temp + 55;
                x++;
            }
            n = n / 16;
        }
        cout << initial << " in Hexadecimal is: ";
        for (int j = x - 1; j >= 0; j--)
            cout << Num[j];
        cout << endl;
    }
};
class Binary : public Decimal
{
	public:
    void compute()
    {
        int Num[32];
        int n = getinit();
        int i = 0;
        while (n > 0)
        {
            Num[i] = n % 2;
            n = n / 2;
            i++;
        }
        cout << initial << " in binary is: ";
        for (int j = i - 1; j >= 0; j--)
            cout << Num[j];
        cout << endl;
    }
};

class Octal : public Decimal
{
	public:
    void compute()
    {
        int n = getinit();
        int Num[100];
        int i = 0;
        while (n != 0)
        {
            Num[i] = n % 8;
            n = n / 8;
            i++;
        }
        cout << initial << " in Octal is: ";
        for (int j = i - 1; j >= 0; j--)
            cout << Num[j];
        cout << endl;
    }
};
int main()
{
	Decimal *dc;
    Hexadecimal h;
    dc = &h;
    dc->compute();
    
    Binary b;
    dc = &b;
	dc->compute();

    Octal o;
    dc = &o;
    dc->compute();
    return 0;
}