//WAP TO CREATE A CLASS COMPLEX WHICH STORE OBJECT (IMGINARY,REAL PART).INPUT 10 COMPLEX NO. AND DISPLAY IT.

#include <iostream>
using namespace std;
class comp
{
        private:
                float real;
                float img;
        public:
                void enter(float a, float b);
                void dis();
};
void comp::enter(float a, float b)
{
        real=a;
        img=b;
}
void comp::dis()
{
        cout<<"\nTHE NUMBER: \n";
        cout<<real<<" +i "<<img;
}
int main()
{
        comp c[10];
        float a,b;
        int i,j,k;
        for(i=0;i<10;i++)
        {
                cout<<"\n ENTER REAL PART OF COMPLEX NUMBER: "<<i+1<<"- ";
                cin>>a;
                cout<<"\n ENTER IMAGINARY PART OF COMPLEX NUMBER: "<<i+1<<"- ";
                cin>>b;
                c[i].enter(a,b);
        }
//displaying data
        for(i=0;i<10;i++)
        {
                c[i].dis();
        }
        return 0;
}
