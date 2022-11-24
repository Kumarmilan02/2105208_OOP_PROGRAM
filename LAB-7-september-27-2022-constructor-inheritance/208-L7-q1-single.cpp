#include "iostream"
#include "string.h"
using namespace std;
class stud
{
    string name, course;
    int roll, age;

public:
    stud(string nm, string cs, int r, int ag)
    {
        name = nm;
        course = cs;
        roll = r;
        age = ag;
    }
    void stud_display()
    {
        cout << "\nDISPLAY\n";
        cout << "\nNAME: " << name << "\nROLL NO: " << roll << "\nCOURSE: " << course << "\nAGE: " << age;
    }
};
class test : public stud
{
    int m[5];

public:
    test(string nm, string cs, int r, int ag, int *ar) : stud(nm, cs, r, ag)
    {
        for (int i = 0; i < 5; i++)
        {
            m[i] = ar[i];
        }
    }
    ~test()
    {
        cout << "\nDESTRUCTOR CALLED";
    }
    int test_total()
    {
        return (m[0] + m[1] + m[2] + m[3] + m[4]);
    }
    void test_display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "\nmarks[i]: " << m[i];
        }
        cout << "\nTotal: " << test_total();
    }
};
int main()
{
    string name, course;
    int roll, age, m[5];
    cout << "Enter name: " << endl;
    getline(cin, name);
    cout << "Roll No.: " << endl;
    cin >> roll;
    cout << "Course taken: " << endl;
    cin >> course;
    cout << "Age:" << endl;
    cin >> age;
    cout << "Enter 5 marks: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> m[i];
    }
    test t(name, course, roll, age, m);
    t.stud::stud_display();
    t.test_display();
    return 0;
}