//wap to write 10 strig into a file and display them from the file

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char str[20],ch;
    int i;
    ofstream out;
    out.open("Copy.txt");
    cout<<"Enter 10 strings\n";
    for(i=0;i<10;i++)
    {
        cin>>str;
        out<<str;
        out<<" ";
    }
    out.close();
    cout<<"From file\n";
    ifstream in;
    in.open("Copy.txt");
    in.get(ch);
    while(!in.eof())
    {
        putchar(ch);
        in.get(ch);
    }
    in.close();
}
