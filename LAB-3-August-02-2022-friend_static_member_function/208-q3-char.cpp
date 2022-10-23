//WAP which displays a given character, n number of times, using a function.
// When the n value is not provided, it should print the given character 80 times. 
//When both the character and n value is not provided, it should print ‘*’ character 80 times. 
//Write the above program in two ways:-    
//-using function overloading.
//-using default arguments.

#include <iostream>
using namespace std;

//default argument
void print( char a = '*' , int n = 80)
{
    for (int i = 0; i < n; ++i)
        {
                cout<<a;
        }
}

//using function overloading
void print2()
{
    for(int i = 0 ; i < 80 ; ++i)
        {
                cout<<"*";
        }
}
void print2(char a)
{
    for (int i = 0; i < 80; ++i)
        {
                cout<<a;
        }
}
void print2(char a , int n)
{
    for (int i = 0; i < n; ++i)
        {
                cout<<a;
        }
}

int main()
{
        //using default argument.                        
    print();
    print('@');
    print('#',5);
    cout<<"\n";
        //using fuction overloading.
    print2();
    print2('%');
    print2('@' , 3);

    return 0;
}
