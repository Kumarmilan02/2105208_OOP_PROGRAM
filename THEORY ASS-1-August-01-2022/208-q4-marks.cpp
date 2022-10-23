//WAP using classes, objects to represent the class student with following specification
//Private data members: Roll no, Name, 6 subjects marks and Total marks
//Public members function to: 1. Accept values from input device 
//2. to calculate the grand total and 3. display grade with other details.

#include <iostream>
#include "string.h"
using namespace std;

class stud {
    int roll;
    char name[20];
    int marks[6];
    int totalMarks = 0;
public:
    void setData() {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll: ";
        cin>>roll;
        for(int i = 0 ; i < 6 ; i++)
        {
            cout<<"\nMarks in subject: "<<i<<":";
            cin>>marks[i];
        }
    }
    
    char grade(int tot) 
    {
        if(tot>= 540) {return 'O';}
        else if(tot < 540 && tot>= 480) {return 'E';}
        else if(tot < 480 && tot>= 420) {return 'A';}
        else if(tot < 420 && tot>= 360) {return 'B';}
        else if(tot < 360 && tot>= 300) {return 'C';}
        else if(tot < 300 && tot>= 240) {return 'D';}
        else if(tot < 240) {return 'F';}
    }
    
    int total() {
        for(int i = 0 ; i < 6 ; i++) {
            totalMarks += marks[i];
        }
        return totalMarks;
    }
    
    void show() {
        cout<<"Name :- "<<name<<endl;
        cout<<"Roll :- "<<roll<<endl;
        cout<<"Total :- "<<total()<<endl;
        cout<<"Grade :- "<<grade(totalMarks)<<endl;
        
    }
};

int main()
{
    stud s1;
    s1.setData();
    s1.show();
    return 0;
}