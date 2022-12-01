/*3.Write a function in C++ to add new objects at the bottom of a binary file “STUD.DAT”, 
assuming the binary file is containing the objects of the following class.*/

#include <iostream>
#include <fstream>
using namespace std;

class STUD
{
    int Rno;
    char Name[20];

public:
    void Enter()
    {
        cout<<"\nENTER ROLL No: ";
        cin >> Rno;
        cout<<"\nENTER NAME: ";
        cin >> Name;
    }
    void Display()
    {
        cout<<"NAME : " << Name << endl;
        cout <<"ROLL NUMBER : " <<Rno <<endl;
    }
};

int main()
{
    fstream inoutfile;
    inoutfile.open("STUDENT.txt", ios::in | ios::out | ios::ate | ios::binary);
    inoutfile.seekg(0, ios::beg);
    cout << "Enter the Number of students \n";
    int n, i,c,c1;
    cin >> n;
    STUD S[n];
    cout << "Now Enter the Details of the students \n";
    for (int i = 0; i < n; i++)
    {
        cout<<"Student : "<<i+1<<" ";
        S[i].Enter();
        inoutfile.write((char *)&S[i], sizeof(S[i]));
        c1=i;
    }
    for (int j = 0; j < n; j++)
    {
        inoutfile.read((char *)&S[j], sizeof(S[j]));
        S[j].Display();
    }
    cout<<"Enter Additional students \n";
    int an;
    cin>>an;
    an=n+an;
    cout << "Now Enter the Details of the  Additional students \n";
    for(int c=c1+1;c<an;c++)
    {
        cout<<"Student : "<<c+1<<" ";
        S[c].Enter();
        inoutfile.write((char *)&S[c], sizeof(S[c]));
    }
    cout<<"The New Output is : \n";
    for (int j = 0; j < an; j++)
    {
        inoutfile.read((char *)&S[j], sizeof(S[j]));
        S[j].Display();
    }
    return 0;
}