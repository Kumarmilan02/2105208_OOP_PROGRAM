

#include"iostream"
using namespace std;
class b;
class a
{
    int p;
    public:
        void input(int x)
        {
            p=x;
        }
        int greatest(b);
};
class b
{
    int q;
    public:
        void input(int y)
        {
            q=y;
        }
        friend int a :: greatest(b);
};
int a::greatest(b v)
{
    if(p > v.q)
        return(p);
    else
        return(v.q);
}
int main()
{
    a m;
    b n;
    m.input(8);
    n.input(12);
    cout<<"GREATER IS:"<<m.greatest(n);
    return 0;
}