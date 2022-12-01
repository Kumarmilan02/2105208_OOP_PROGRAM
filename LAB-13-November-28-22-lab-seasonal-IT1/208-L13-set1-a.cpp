/* Write a program to create a class person, with name, age, phone number as the data member. 
Create an instance of a person class using appropriate constructor and raise an exception if the name contains anything other than alphabets and space.*/
//2105208_MILAN KUMAR SAHOO

#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;

class person
{
    char name[30];
    int age;
    char phno[15]; 
    public:
        person(char *n,int a,char * p)
        {
            for(int i=0;n[i]!='\0';i++){
                name[i]=n[i];
            }
            for(int i=0;p[i]!='\0';i++){
                phno[i]=p[i];
            }
            age=a;
        }
        void checkvalid()
        {
            int nonalph=0;
            try
            {
                for(int i=0;name[i]!='\0';i++){
                    if(isdigit(name[i])){
                        nonalph++;
                    }
                    if(ispunct(name[i])){
                        nonalph++;
                    }
                }
                if(nonalph==0)
                {
                    cout<<"\n NAME IS VALID.";
                    return;
                }
                else
                {
                    throw name;

                }
                
            }
            catch(char * n){
                cout<<"\n NAME IS NOT VALID: "<<n;
            }
        }
};
int main(){
    char na[30]="Raj&";
    char pn[15]="987654321";
    person p1(na,29,pn);
    p1.checkvalid();
    cout<<"\n EXITING MAIN.";
    return 0;
}