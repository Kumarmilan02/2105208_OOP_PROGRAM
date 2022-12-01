// C++ program for the above approach
//2105208_MILAN KUMAR SAHOO
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

// encdec class with encrypt() and
// decrypt() member functions

class encdec
{

    int key;
    string file = "geeksforgeeks.txt";
    char c;
    public:
    void encrypt();
    void decrypt();
};
void encdec::encrypt()
{
    cout << "key: ";
    cin >> key;
    fstream fin, fout;
    fin.open(file, fstream::in);
    fout.open("encrypt.txt", fstream::out);
    while (fin >> noskipws >> c)
    {

        int temp = (c + key);
        fout << (char)temp;
    }
    fin.close();  
    fout.close();
}
void encdec::decrypt()
{
    cout << "key: ";
    cin >> key;
    fstream fin;
    fstream fout;
    fin.open("encrypt.txt", fstream::in);
    fout.open("decrypt.txt", fstream::out);
    while (fin >> noskipws >> c)
    {
        int temp = (c - key);
        fout << (char)temp;
    }
    fin.close();
    fout.close();
}
int main()
{
    encdec enc;
    char c;
    cout << "\n";
    cout << "Enter Your Choice : -> \n";
    cout << "1. encrypt \n";
    cout << "2. decrypt \n";
    cin >> c;
    cin.ignore();
    switch (c)
    {
        case '1':
            enc.encrypt();
            break;
        case '2':
            enc.decrypt();
            break;
    }

}