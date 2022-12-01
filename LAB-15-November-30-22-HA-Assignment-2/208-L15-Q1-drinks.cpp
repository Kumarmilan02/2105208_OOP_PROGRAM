/*Assuming the class DRINKS defined below, write functions in C++ to perform the following:
-Write the objects of DRINKS to a binary file.
-Read the objects of DRINKS from binary file and display them onscreen when DNAME has value "COCA COLA".*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class DRINKS
{
    int DCODE;
    char DNAME[15]; // Name of the drink
    int DSIZE;      // Size in liters/ml
    float DPRICE;

public:
    void getdrinks()
    {
        cout << "\nEnter the code---name of the drink--size of the drink--Price of the drink respectively \n";
        cin >> DCODE >> DNAME >> DSIZE >> DPRICE;
    }
    void showdrinks()
    {
        cout << "\n code :" << DCODE << "\n name :" << DNAME << "\n size" << DSIZE << "\n Price :" << DPRICE << endl;
    }
    char *getname()
    {
        if (strcmp(DNAME, "COCACOLA"))
            return DNAME;
        else
            return NULL;
    }
};
void writeobj()
{
    fstream inoutfile;
    inoutfile.open("Drinks.dat", ios::in | ios::out | ios::ate | ios::binary);
    if (!inoutfile)
    {
        inoutfile.close();
        inoutfile.open("Drinks.dat", ios::out);
        inoutfile.close();
        inoutfile.open("Drinks.dat", ios::in | ios::out | ios::ate | ios::binary);
    }

    inoutfile.seekg(0, ios::beg);
    cout << "Enter the Number of drinks \n";
    int n;
    cin >> n;
    DRINKS D[n];
    cout << "Now Enter the Details of the drinks \n";
    for (int i = 0; i < n; i++)
    {
        D[i].getdrinks();
        inoutfile.write((char *)&D[i], sizeof(D[i]));
    }
    inoutfile.close();
}
void readcola()
{
    fstream inoutfile;
    inoutfile.open("Drinks.dat", ios::in);
    DRINKS d;

    while (inoutfile.read((char *)&d, sizeof(d)))
    {
        if (d.getname() != NULL)
        {
            d.showdrinks();
        }
    }
    inoutfile.close();
}
int main()
{
    writeobj();
    readcola();
    return 0;
}