/*Consider the following class declaration:
class student
{
    int addno;
    char name[90];
    float totalmarks;
    public:
    void getinfo()
    {
        cin>>addno>>name>>totalmarks ;
    }
    void showinfo()
    {
        cout<<addno<<name<<totalmarks;
    }
    float rettotmarks ()
    {
        return totalmarks;
    }
};
Give function definition to do the following :
-Write the objects of student to a binary file.
-Read the objects of student from a binary file and display all the objects on the screen where total marks is between 456 and 498 .*/

#include <iostream>
#include <fstream>
using namespace std;

class student
{
    int addno;
    char name[90];
    float totalmarks;

public:
    void getinfo()
    {
        cout<<"\nEnter the Additional Number--name of the student--total marks\n";
        cin >> addno >> name >> totalmarks;
    }
    void showinfo()
    {
        cout<<"\nThe Additional Number--name of the studens--total marks: ";
        cout <<"\n"<< addno <<"\n"<< name <<"\n"<< totalmarks<<endl;
    }
    float rettotmarks()
    {
        if(totalmarks >= 456 && totalmarks <= 498)
        return totalmarks;
        else 
        return 0.0;
    }
};

int main()
{
    fstream inoutfile;
    inoutfile.open("q2stud.dat", ios::in | ios::out | ios::ate | ios::binary);
    inoutfile.seekg(0, ios::beg);
    cout << "Enter the Number of students \n";
    int n;
    cin >> n;
    student S[n];
    cout<<"Now Enter the Details of the students \n";
    for (int i = 0; i < n; i++)
    {
        S[i].getinfo();
        inoutfile.write((char *)&S[i], sizeof(S[i]));
    }
    for (int i = 0; i < n; i++)
    {
        inoutfile.read((char *)&S[i], sizeof(S[i]));
        if(S[i].rettotmarks() != 0.0)  
        {      
        S[i].showinfo();
        }
    }
    return 0;
}