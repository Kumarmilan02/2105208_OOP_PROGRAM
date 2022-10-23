//WAP to find square and cube of a number using inline function.

#include <iostream>
using namespace std;
class squarecube
{
   private:
        int n,r,r1;
        public:
        void input();
        void calc();
        void display();

};

inline void squarecube::input()
{
        cout<<"Enter an integer: ";
        cin>>n;
}

inline void squarecube::calc()
{
        r=n*n;
        r1=n*n*n;
}

inline void squarecube::display()
{
        cout<<"\nSquare of number [ "<<n<<"^"<<2<<" ] = "<<r<<"\n";
        cout<<"\nCube of number [ "<<n<<"^"<<3<<" ] = "<<r1<<"\n";
}

int main ()
{
        squarecube s;
        s.input();
        s.calc();
        s.display();

        return 0;
}
