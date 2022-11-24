/*WAP TO IMPLEMENT READ AND WRITE OPERATION FOR SINGLE FILES.*/

#include "fstream"
#include "iostream"
using namespace std;
int main()
{
    ofstream outf1("BOOK");
    cout<<"\nEnter Book name: ";
    char name[20];
    cin>>name;

    outf1<<name<<"\n";
    
    float cost;
    cout<<"\nEnter Book price: \n";
    cin>>cost;
    outf1<<cost<<"\n";

    outf1.close();

    ifstream inf2("BOOK");
    inf2>>name;
    inf2>>cost;
    cout<<"BOOK NAME: "<<name<<"\n";
    cout<<"BOOK PRICE: "<<cost<<"\n";

    inf2.close();
    return 0;
}