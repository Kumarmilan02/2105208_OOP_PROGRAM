/*WAP TO CONVERT FEET-INCH CLASS TO METER-C.M CLASS USING CLASS -CLASS TYPE COVERSION.*/
/*METHOD 2*/

#include "iostream"
using namespace std;
class mcm
{
    int m,cm;
    public:
    mcm(int a=0,int b=0)
    {
        m=a;
        cm=b;
    }
    void display()
    {
        cout << "METER: " << m << "\tC.M: " << cm << endl;
    }
    int & getm()
    {
        return m;
    }
    int & getcm()
    {
        return cm;
    }
};
class ftin
{
    int f, i;
    public:
    ftin(int a = 0, int b = 0)
    {
        f = a;
        i = b;
    }
    void display()
    {
        cout << "FEET: " << f << "\tINCHES: " << i << endl;
    }
    int getinch()
    {
        return i;
    }
    int getfeet()
    {
        return f;
    }
    operator const mcm()
    {
        mcm temp;
        int t = f * 12 + i;
        float t1 = t * 2.54;
        temp.getm() = t = t1 / 100;
        temp.getcm() = t1 - t * 100;
        return temp;
    }
};
int main()
{
    ftin obj1(12,9);
    mcm obj2;
    obj2=obj1;
    obj2.display();
    obj1.display();
}