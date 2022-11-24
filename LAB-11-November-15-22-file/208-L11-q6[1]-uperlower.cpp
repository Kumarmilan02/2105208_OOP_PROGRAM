//vi. WAP to convert all uppercase letters in a given file, to lower case and vice-versa.[diffetent file]

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream in;
    in.open("uppercase.txt");
    ofstream out("lowercase.txt");
    char ch;
    in.get(ch);
    while (!in.eof())
    {
        if (ch >= 65 && ch <= 90)
            ch = ch + 32;
        else if (ch >= 97 && ch <= 122)
            ch = ch - 32;
        out << ch;
        in.get(ch);
    }
    in.close();
    out.close();
    in.open("lowercase.txt");
    in.get(ch);
    while (!in.eof())
    {
        putchar(ch);
        in.get(ch);
    }
    in.close();
}