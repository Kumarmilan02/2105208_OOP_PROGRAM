/*WAP TO IMPLEMENT BASIC TYPE TO CLASS TYPE CONVERSION*/

#include"iostream"
using namespace std;
class time1
{
    int hrs,min;
    public:
    time1(){ }
    time1(int t)
    {
        hrs=t/60;
        min=t%60; 
    }
    void display()
    {
        cout<<"HRS: "<<hrs<<"\tMIN: "<<min<<endl;
    }
};
int main()
{
    time1 t1;
    int duration=95;
    t1=duration; //TYPE CONVERSION BASIC - CLASS
    t1.display();
    return 0;
}