//Create a class time 1 which has three data members: hours, minute and second.
//Overload the ++ (post and pre) and -- (post and pre )operator for the class.

#include <iostream>
using namespace std;

class time1{
    int hrs,min,sec;
    public:
        time1(int a=0,int b=0,int c=0){
            hrs=a;min=b;sec=c;
        }
        time1 operator ++(){
            sec++;
            if(sec>59){
                min++;
                sec=(sec%60);
            }
            else{
                min++;
            }
            if(min>59){
                hrs++;
                min=(min%60);
            }
            else{
                hrs++;
            }
            if(hrs>23){
                hrs=(hrs%24);
            }
            return *this;
            
        }
        time1 operator ++(int){
            time1 t;
            t.sec=sec++;
            if(sec>59){
                t.min=min++;
                sec=(sec%60);
            }
            else{
                min++;
            }
            if(min>59){
                t.hrs=hrs++;
                min=(min%60);
            }
            else{
                hrs++;
            }
            if(hrs>23){
                hrs=(hrs%24);
            }
            return t;
            
        }
        time1 operator --(){
            sec--;
            if(sec<0){
                min--;
                sec=sec+60;
            }
            else{
                min--;
            }
            if(min<0){
                hrs--;
                min=min+60;
            }
            else{
                hrs--;
            }
            if(hrs<0){
                hrs=hrs+24;
            }
            return *this;
        }
        time1 operator --(int){
            time1 t;
            t.sec=sec--;
            if(sec<0){
                t.min=min--;
                sec=sec+60;
            }
            else{
                t.min=min--;
            }
            if(min<0){
                t.hrs=hrs--;
                min=min+60;
            }
            else{
                t.hrs=hrs--;
            }
            if(hrs<0){
                hrs=hrs+24;
            }
            return t;
        }
        void display(){
            cout<<"\nTime:"<<hrs<<":"<<min<<":"<<sec<<endl;
        }
};

int main(){
    time1 t1(8,52,59),t2(4,59,51),t3,t4;
    cout<<"\nADDITION\n";
    t3=t1++;
    t4=++t2;
    t1.display();
    t2.display();
    cout<<"\nPOSTFIX ADD: ";
    t3.display();
    cout<<"\nPREFIX ADD: ";
    t4.display();
    cout<<"\n SUBTRACTING\n";
    time1 t5,t6(12,0,59);
    time1 t7,t8;
    t7=t6--;
    t8=--t5;
    t5.display();
    t6.display();
    cout<<"\nPOSTFIX SUB: ";
    t7.display();
    cout<<"\nPREFIX SUB: ";
    t8.display();
    return 0;
}