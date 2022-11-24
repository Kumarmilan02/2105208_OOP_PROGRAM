/*WAP TO IMPLEMENT CLASS TYPE - BASIC TYPE CONVERSION.*/

#include"iostream"
using namespace std;

class time1
{
    int hrs,min;
    public:
    //time1(){ }
    time1(int a=0,int b=0)
    {
        hrs=a;
        min=b; 
    }
    void display()
    {
        cout<<"HRS: "<<hrs<<"\tMIN: "<<min<<endl;
    }
    operator int()
    {
        return(hrs*60+min);
    }
};
int main()
{
    time1 t1(5,35);
    int duration=t1;// Class-Basic Type
    t1.display();
    cout<<"DURATION: "<<duration<<"min";
    return 0;
}