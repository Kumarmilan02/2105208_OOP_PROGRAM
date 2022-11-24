/*Write a program that takes student data (roll number, name, gender,
marks in three subjects (phy, chem. & math) from the keyboard and
store it to a file student.txt.
k=Atoi(n)*/

#include <iostream>
#include <fstream>
using namespace std;
struct student{
    int roll;
    string name;
    char gen;
    int m[3];
};

int main(){
    struct student s1;
    fstream f1;
    string chr;
    f1.open("student.txt", ios::out);
    cout<<"\n Enter Roll: ";
    cin>>s1.roll;
    f1<<"ROLL: "<<s1.roll<<"\n";
    cout<<"\n Enter Name: ";
    cin.ignore();
    getline(cin,s1.name);
    f1<<"NAME: "<<s1.name<<"\n";
    cout<<"\n Enter Gender: ";
    //cin.ignore();
    cin>>s1.gen;
    f1<<"GENDER: "<<s1.gen<<"\n";
    cout<<"\n ENTER Marks in phy, chem ,math : ";
    for(int i=0;i<3;i++){
        cin>>s1.m[i];
        f1<<"MARKS: "<<s1.m[i]<<"\t";
    }
    f1.close();
    f1.open("student.txt",ios::in);
    cout<<"\n DISPLAYING DETAILS: \n";
    while(f1){
        f1>>chr;
        cout<<chr<<"\n";
    }
    f1.close();
    return 0;
}