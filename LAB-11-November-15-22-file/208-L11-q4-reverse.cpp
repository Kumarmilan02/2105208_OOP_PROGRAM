//wap to display the content of file in reverse order.
#include "fstream"
#include "iostream"
using namespace std;

int main()
{
    ifstream fin("country.txt");
    ofstream fout("test.txt");
    char ch;
    fin.seekg(0,ios::end);
    fin.clear();
    int size=fin.tellg();
    for(int j=1; j<=size; j++)
    { 
        fin.seekg( -j, ios::end);
        fin.get(ch);
        fout.put(ch);
    }
    fin.close();
    fout.close();
    cout<<"end";
}
