// CLASS TO CLASS TYPE BY REFERENCE RETURN METHOD fahrenhit from celcius
#include <iostream>
using namespace std;

class faren
{
    float f;

public:
    faren(int r = 0)
    {
        f = r;
    }
    void display()
    {
        cout << "\n TEMP: " << f << "F" << endl;
    }
    float &getf()
    {
        return f;
    }
};
class cels
{
    float c;

public:
    cels(float a = 0)
    {
        c = a;
    }
    void display()
    {
        cout << "\n TEMP: " << c << " C" << endl;
    }
    operator const faren()
    {
        faren temp;
        temp.getf() = (c * 1.8 + 32);
        return temp;
    }
};
int main()
{
    cels c1(37.0);
    faren f1;
    f1 = c1;
    c1.display();
    f1.display();
    return 0;
}