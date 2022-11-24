//wap to display content of file using character output function.

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in;
    in.open("charcater.txt");
    char ch;
    ofstream out("character.txt");
    out<<"INDIA IS THE BEST.";
    out.close();
    in.get(ch);
    while(!in.eof())
    {
        putchar(ch);
        in.get(ch);
    }
    in.close();
    cout<<"END";
}