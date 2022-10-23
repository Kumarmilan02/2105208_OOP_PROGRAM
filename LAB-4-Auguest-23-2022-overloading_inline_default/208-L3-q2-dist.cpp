//Create two classes which stores distance in feet, inches and meter, centimeter format respectively. 
//Write a function which compares distance in object of these classes and displays the larger one.

#include<iostream>
using namespace std;

class DF;
class DM
{
    float meters,centimeters,cm;
    public:
        void input(float m, float c)
        {
 	        meters = m;
 	        centimeters  = c;
        }
        void display(void)
        {
            cout<<meters<<"\tMETERS AND "<<centimeters<<"CENTIMETERS"<<endl;
            cm=(meters*100.0)+centimeters;
            cout<<cm<<"\tCENTIMETESRS"<<endl;
        }
    friend void compares(DM &,DF &);
};

class DF
{
    float inch;
    float feet;
    float in;
    public:
 	    void input (float i, float f)
        {
 		    inch = i;
 		    feet = f;
	    }
        void display(void)
        {
            cout<<inch<<"\tINCH AND "<<feet<<"\tFEET"<<endl;
            in=(feet * 12.0)+inch;
            cout<<in<<"\tINCHES"<<endl;
        }
    friend void compares(DM &,DF &);
};

void compares(DM &x,DF &y)
{
        if((x.cm)>(y.inch * 2.54))
        {
            cout<<"\nDISTANCE IN METER AND CENTIMETER IS LARGER.\n";
        }
        else
        {
            cout<<"\nDISTANCE IN FEET AND INCH IS LARGER.\n";
        }
	
}
int main()
{
    DM obj1;
    DF obj2;
    obj1.input(2.12,4.12);
    obj2.input(1.12,2.12);
    cout<<"DATA ARE: "<<"\n";
    obj1.display();
    obj2.display();
    compares(obj1,obj2);
    return 0;
}