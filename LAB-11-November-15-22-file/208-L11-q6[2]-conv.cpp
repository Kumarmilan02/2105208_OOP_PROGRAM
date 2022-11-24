//vi. WAP to convert all uppercase letters in a given file, to lower case and vice-versa.[same file]

#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main(){
    ofstream fout;
    string para;
    
    fout.open("name.txt", ios::out);
    cout<<"\n ENTER DATA TO BE ENTERED: ";
    getline(cin,para);
    fout<<para;
    fout.close();
    fstream finout;
    char ch;
    finout.open("name.txt",ios::in| ios::out| ios::ate);
    finout.seekg(0,ios::beg);
    while(finout.eof()==0){
        finout.get(ch);
        if(isupper(ch)){
            finout.seekp(-1,ios::cur);
            ch=tolower(ch);
            finout.put(ch);
        }
        else if(islower(ch)){
            finout.seekp(-1,ios::cur);
            ch=toupper(ch);
            finout.put(ch);
        }
    }
    cout<<"\n DISPLAYING UPDATED FILE: \n";
    finout.clear();
    finout.seekg(0,ios::beg);
    while(finout){
        finout.get(ch);
        cout<<ch;
    }
    finout.close();
    return 0;
}