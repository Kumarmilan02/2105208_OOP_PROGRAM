/*WAP TO CONVERT KG-GRAM  TO POUND USING CLASS-CLASS TYPE CONVERSION.*/

#include "iostream"
using namespace std;
class pound
{
    float lb;
    public:
    pound(int a=0)
    {
        lb=a;
    }
    void display()
    {
        cout << "POUND: " << lb << "\tb"<< endl;
    }
    float &getlb()
    {
        return lb;
    }
};
class kggr
{
    int kg, g;
    public:
    kggr(int a = 0, int b = 0)
    {
        kg = a;
        g = b;
    }
    void display()
    {
        cout << "KG: " << kg << "\tGRAM: " << g << endl;
    }
    int getgram()
    {
        return g;
    }
    int getkg()
    {
        return kg;
    }
    operator const pound()
    {
        pound temp;
        float t = kg + (g/1000);
        float t1 = t * 2.20462 ;
        temp.getlb() = t = t1 ;
        return temp;
    }
};
int main()
{
    kggr obj1(2,200);
    pound obj2;
    obj2=obj1;
    obj2.display();
    obj1.display();
}