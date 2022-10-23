//Create a class which stores a string and its length as data members. Include all the constructors.
// Include a member function to join two strings and display the concatenated string.

#include <iostream>
#include <string.h>
using namespace std;

class strng{
    int l;
    char *ch;
    public:
        strng(){
            ch=new char;
            l=strlen(ch);    
        }
        strng(char *b){
            l=strlen(b);
            ch=new char[strlen(b)+1];
            strcpy(ch,b);
        }
        
        void concan(strng &ob1,strng &ob2)
        {
            int l;
            l=(ob1.l)+(ob2.l);
            delete ch;
            ch=new char[l];
            int i=0;
            int j=0;
            for(i=0,j=0;ob1.ch[j]!='\0';i++,j++){
                ch[i]=ob1.ch[j];
             }
            j=0;
            for(i-1;ob2.ch[j]!='\0';i++,j++){
                ch[i]=ob2.ch[j];
            }
        }
        ~strng(){
            delete ch;
            cout<<"\n DESTRUCTOR CALLED.";
        }
        void display(){
            cout<<"\nSTRING:"<<ch;
        }
};
int main(){
    char s1[10];
    char s2[10];
    cout<<"\n ENTER 1st STRING: ";
    cin>>s1;
    cout<<"\n ENTER 2nd STRING: ";
    cin>>s2;

    strng A(s1),C;
    strng B(s2);
    C.concan(A,B);
    C.display();

}