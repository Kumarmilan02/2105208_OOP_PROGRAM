/*WAP TO IMPLEMENT READ AND WRITE OPERATION ON A MULTIPLE FILE.*/

#include "fstream"
#include "iostream"
using namespace std;
int main()
{
    ofstream fout;
    fout.open("STATE");
    
    fout<<"\n\t-ODISHA-\n";
    fout<<"\n\t-GUJURAT-\n";
    fout<<"\n\t-MAHARASTRA-\n";

    fout.close();

    fout.open("CAPITAL");
    
    fout<<"\n\t-BHUBANESWAR-\n";
    fout<<"\n\t-GANDHINAGAR-\n";
    fout<<"\n\t-MUMBAI-\n";

    fout.close();

    const int n=80;
    char line[n];

    ifstream fin;
    fin.open("STATE");
    cout<<"\nState file opened.\n";

    while(fin)
    {
        fin.getline(line,n);
        cout<<line;
    }
    fin.close();

    fin.open("CAPITAL");
    cout<<"\ncapital file opened.\n";

    while(fin)
    {
        fin.getline(line,n);
        cout<<line;
    }
    fin.close();
    return 0;
}