#include "iostream"
#include "stdlib.h"
#include "conio.h"
using namespace std;
class polynomial
{
    int a[' '],b[' '],c[' '],i,j,m,n,x,y;
    public:
            void getdata();
            void add();
            void displayadd();
};
void polynomial:: getdata()
{
    cout<<"\n Enter the highest exponential of 1st polynomial: ";
    cin>>n;
    for(i=0;i<=n;i++)
        {
            cout<<"\n Enter the cofficient of 1st polynimial exp= "<<i<<":";
            cin>>a[i];

        }
    cout<<"\n Enter the highest exponential of 2nd polynomial: ";
    cin>>m;
    for(i=0;i<=m;i++)
        {
            cout<<"\n Enter the cofficient of 2nd polynimial exp= "<<i<<":";
            cin>>b[i];
            
        }
}
void polynomial::add()
{
    if(m==n)
    {
        for(i=0;i<=n;i++)
        {
            c[i]=a[i]+b[i];
        }
    }
    else if(m>n)
    {
        for(i=0;i<=m;i++)
        {
            if(i<=n)
            {
                c[i]=a[i]+b[i];
            }
            else
            {
                c[i]=b[i];
            }

        }
    }
    else if(n>m)
    {
         for(i=0;i<=n;i++)
        {
            if(i<=m)
            {
                c[i]=a[i]+b[i];
            }
            else
            {
                c[i]=a[i];
            }

        }

    }
}
void polynomial::displayadd()
{
    x=i-1;
    for(j=i-1;j>=0;j--)
    {
        if(j==0)
        {
            cout<<c[j];
            break;
        }
        cout<<c[j]<<"x^"<<x<<"+";
        x--;
    }
}
int main()
{
    polynomial p;
    p.getdata();
    p.add();
    cout<<"\nResult Addition: ";
    p.displayadd();
    getch();
    return 0;
}