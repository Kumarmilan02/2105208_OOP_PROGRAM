//Create a class to store an integer array. Overload insertion and extraction
//operator to input and display the array elements.

#include"iostream"
using namespace std;
class Arr
{
    int l;
    int* p;
    public:
    friend istream& operator >>(istream &,Arr &);
    friend ostream& operator <<(ostream &,const Arr &);
};
istream& operator >>(istream &in,Arr &a)
{
    cout<<"Enter length of an array: ";
    in>>a.l;
    a.p=new int[a.l];
    cout<<"ENTER ARRAY ELEMENT:";
    int i=0;
    for(i=0;i<a.l;i++)
    {
        in>>a.p[i];
    }
    return in;
}
ostream& operator <<(ostream &out,const Arr &a)
{
    cout<<"ARRAY IS:";
    int i=0;
    for(i=0;i<a.l;i++)
    {
        out<<a.p[i]<<" ,";
    }
    return out;
}
int main()
{
    Arr a1;
    cin>>a1;
    cout<<a1;
    return 0;
}
