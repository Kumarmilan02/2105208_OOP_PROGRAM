////wap to copy the content one file to another

#include <fstream>
#include "iostream"
using namespace std;
int main()
{
    
    ifstream fin;
    fin.open("country.txt");

    ofstream fout;
    fout.open("sample.txt");
    char ch;
    while (!fin.eof())
    {
        if(fin.get(ch))
        fout << ch;
    }
    fin.close();
    fout.close();
    cout<<"END";
    return 0;
}
/*#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream f1, f2;
    char ch;
    f1.open("country.txt", ios::in);
    f2.open("sample.txt", ios::out);
    if(!f1 || !f2){
        cout<<"Error opening the file.";
        exit(1);
    }
    while(f1.eof()==0){
        if(f1.get(ch))
        f2.put(ch);
    }
    cout<<"Files copied.";
    f1.close();
    f2.close();
    return 0;
}*/

