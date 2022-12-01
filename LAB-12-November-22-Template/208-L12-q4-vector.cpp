/*WAP TO REPRESENT VECTOR USING TEMPLATE*/

#include "iostream"
using namespace std;
//const int size=3;
template <class T>
class vector
{
    T *v;

public:
    vector()
    {
        v = new T[3];
        for (int i = 0; i < 3; i++)
            v[i] = 0;
    }
    vector(T *a)
    {
        v = new T[3];
        for (int i = 0; i < 3; i++)
            v[i] = a[i];
    }
    T operator *(vector &y)
    {
        T sum = 0;
        for (int i=0;i<3; i++)
        {
            sum += this->v[i]*y.v[i];
        }
        return sum;
    }
    void display() 
    {
        for (int i = 0; i < 3; i++)
            cout<<v[i]<<"\t";
        cout<<"\n";
    }
};
int main()
{
    float x[3] = {3.5, 4.6, 7.8};
    int y[3] = {5, 7, 6};

    vector<float> v1;
    vector<int> v2;
    v1 = x;
    v2 = y;

    cout << "\nv1 =";
    v1.display();
    cout << "\nv2 =";
    v2.display();
    //cout<<"\nv1*v2 = "<< v1*v2;
    return 0;
}