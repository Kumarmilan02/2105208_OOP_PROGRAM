#include"iostream"
#include<string.h>
using namespace std;
int main()
{
    char m[50];
    string mystr;
    cout<<"Enter a string";
    cin.get(m,25);

    cout<<"HELLO!";
    cout<<m<<endl;
    getline(cin,mystr);
    cout<<mystr;

    return 0;
}