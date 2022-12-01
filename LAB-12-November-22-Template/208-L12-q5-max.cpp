/*wap to find maximun number using template.*/

#include "iostream"
using namespace std;

template <class T>
T max(T &x, T &y)
{
    return x > y ? x : y;
}
int main()
{
    float p, q;
    int m, n;
    cout<< "\n Enter two integers: ";
    cin >> m >> n;
    cout << "\nThe maximum between " << m << "and" << n << "is: " << max(m,n);
    cout << "\n Enter two floats: ";
    cin >> p >> q;
    cout << "\nThe maximum between " << p << "and" << q << "is: " << max(p,q);
    return 0;
}
