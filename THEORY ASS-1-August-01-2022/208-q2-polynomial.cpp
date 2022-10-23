//WAP to add, multiply two polynomial using classes and objects.
#include <iostream>

using namespace std;

class poly {
    int x2;
    int x1;
    int x0;
public:
    void setData(int xx , int x , int xo) {
        x2 = xx;
        x1 = x;
        x0 = xo;
    }
    void show() {
        cout<<x2<<" x^2 + "<<x1<<" x^1 + "<<x0;    
    }
    
    poly add(poly a , poly b) {
        poly temp;
        temp.x2 = a.x2 + b.x2;
        temp.x1 = a.x1 + b.x1;
        temp.x0 = a.x0 + b.x0;
        return temp;
    }
    void mul(poly a,poly b){
        int t1,t2,t3,t4,t0;
        t0=(a.x0*b.x0);
        t1=(a.x1*b.x0)+(a.x0*b.x1);
        t2=(a.x2*b.x0)+(a.x0*b.x2)*(a.x1*b.x1);
        t3=(a.x2*b.x1)+(a.x1*b.x2);
        t4=(a.x2*b.x2);
        cout<<"PRODUCT: "<<t4<<"x^4 +"<<t3<<"x^3 +"<<t2<<"x^2 +"<<t1<<"x +"<<t0;
    }
};

int main()
{
    poly p1 , p2 , p3;
    int a,b,c;
    cout<<"Enter coef of x^2 followed by x^1 and x^0 of first polyinomial\n";
    cin>>a>>b>>c;
    p1.setData(a , b ,c);
    cout<<"Do the same for second polynomial :-\n";
    cin>>a>>b>>c;
    p2.setData(a , b ,c);
    p3 = p3.add(p1 , p2);
    p3.show();
    cout<<"\n";
    p3.mul(p1,p2);
    return 0;
}