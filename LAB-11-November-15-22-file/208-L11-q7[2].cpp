/*Write a program that takes student data (roll number, name, gender,
marks in three subjects (phy, chem. & math) from the keyboard and
store it to a file student.txt.
k=Atoi(n)*/

#include <iostream>
#include <fstream>
using namespace std;
class student
{
    int roll, m[3];
    char gen, name[10];

public:
    void get()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter gender: ";
        cin >> gen;
        cout << "Enter marks in PCM: ";
        for (int i = 0; i < 3; i++)
        {
            cin>>m[i];
        }
    }
    void show()
    {
        cout << "Name: " << name << "\nRoll: " << roll << "\nGender: " << gen << "\nMarks in PCM:";
        for (int i = 0; i < 3; i++)
        {
            cout << " " << m[i];
        }
    }
};
int main()
{
    fstream f;
    f.open("file3.txt", ios::out | ios::in);
    student s1;
    s1.get();
    f.write((char *)&s1, sizeof(s1));
    ;
    f.seekg(0);
    cout << "Object written on the file:\n";
    f.read((char *)&s1, sizeof(s1));
    s1.show();
    f.close();
    return 0;
}