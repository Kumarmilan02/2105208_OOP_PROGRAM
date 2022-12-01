/*Write a template class set. Define functions to
I.Encrypt the elements of the set.
II. Decrypt the elements of the set.*/
//2105208_MILAN KUMAR SAHOO

#include <iostream>
using namespace std;

template<class T>
class set
{
    T str;
    int k;
    public:
    set()
    {
        cout << "Please enter a string:\t";
        cin >> str;
        cout<<"\nENTER KEY: ";
        cin>>k;
    }
    void encrypt()
    {
        for (int i = 0; (i < 100 && str[i] != '\0'); i++)
                str[i] = str[i] + k;
        cout << "\nEncrypted string: " << str << endl<<"\n";
    }
    void decrypt()
    {
        for (int i = 0; (i < 100 && str[i] != '\0'); i++)
                str[i] = str[i] - k; 
        cout << "\nDecrypted string: " << str << endl;
    }
    
};
int main()
{
    set<string> c;
    int x;
    cout<<"\n1.ENCRYPT";
    cout<<"\n2.DECRYPT";
    cout<<"\nENTER CHOICE: ";
    cin>>x;
    switch(x)
    {
        case 1:
            c.encrypt();
            break;
        case 2:
            c.decrypt();
            break;
        default:
            cout<<"invalid choice";
    }
    return 0;
}