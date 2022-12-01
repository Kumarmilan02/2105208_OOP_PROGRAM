#include <iostream>
using namespace std;

class student {
    char *name;
    int age;
    int roll;
    int avg;
public:
    student() {
        int temp;
        cout<<"Enter size of your name:\n";
        cin>>temp;
        cout<<"Enter name\n";
        name = new char[temp];
        cin>>name;
        cout<<"enter roll\n";
        cin>>roll;
        cout<<"enter age\n";
        cin>>age;
        cout<<"enter average marks\n";
        cin>>avg;
    }
    student(const student &s) {
        name = s.name;
        roll = s.roll;
        age = s.age;
        avg = s.avg;
    }
    void display() {
        cout<<"Name is\n"<<name<<"\nRoll is\n"<<roll<<"\nage is\n"<<age<<"\naverage is\n"<<avg;
    }
    friend void higheravg(student, student);
};

void higheravg(student a , student b) {
    cout<<"The student with higher marks:\n";
    if(a.avg > b.avg) {
        a.display();
    }
    else {
        b.display();
    }
}

int main() {
    student x;
    student y;
    student z(y);

    higheravg(x , z);
    return 0;
}