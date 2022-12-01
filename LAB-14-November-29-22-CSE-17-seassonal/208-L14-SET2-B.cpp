/*Write a program to create a class kilometer (data members are kmand m) and perform the following operations-
-I.Input the object using >> extraction operator overloading 
-II. Display the object using<< insertion operator overloading 
-III. Add two object using + operator overloading.*/
//2105208_MILAN KUMAR SAHOO

#include"iostream"
using namespace std;
class kilo
{
    int km;
    int m;
    public:
    friend istream & operator >> (istream &in, kilo &c)
    {
        cout<<"Enter km : ";
        in>>c.km;
        cout<<"Enter meter : ";
        in>>c.m; 
        return in;
    }
    friend ostream & operator << (ostream & out, const kilo &c)
    {
        out<<"\nTHE distance  is: ";
        out<<"\nkm:"<<c.km<<"\tm: "<<c.m<<endl;
        return out; 
    }
    friend kilo operator + (kilo c1, kilo c2)
    {
        kilo k;
        k.km=c1.km +c2.km;
        k.m=c1.m +c2.m;
        if(k.m>=1000)
        {
            k.m=k.m-1000;
            k.km=k.km++;
        }
        return k;
    }
};
int main()
{
    kilo k1,k2,sum;
    cin>>k1>>k2;
    cout<<"\nThe dist is :";
    cout<<k1<<k2;
    sum=k1+k2;
    cout<<"THE SUM IS: "<<sum<<endl;
    return 0 ;  
}