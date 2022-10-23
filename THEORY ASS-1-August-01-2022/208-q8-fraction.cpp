//Define a class named as FRACTION that contains two data members that represent the numerator and denominator of a fraction. 
//By defining necessary member functions, write a program to add, subtract and multiply two fractions. 
//The add accepts the objects using callby- value technique, subtract using call-by-reference and multiply using call-by-address technique.
//Sample input/Output:: For Fraction-1 :: Enter the numerator: 3 :: Enter the denominator: 5
//For Fraction-2 :: Enter the numerator: 4 :: Enter the denominator: 9
//Result of addition = 47/45 :: Result of subtraction = 7/45 :: Result of multiplication = 4/15

#include <iostream>
#include <cmath>
using namespace std;

class frctn{
    int nmr;
    int dmr;
    public:
        void enter(int a,int b);
        void show();
        int gcf(int m,int n);
        frctn add(frctn a,frctn b);
        void sub(frctn* e,frctn* f);
        void mul(frctn& p,frctn& q);
};

void frctn::enter(int a, int b){
    nmr=a;
    dmr=b;
}

void frctn::show(){
    cout<<"\n FRACTION: "<<nmr<<"/"<<dmr;   
}
int frctn::gcf(int m,int n){
    int gcd;
    for(int i=1; i<=m && i<=n; i++)
    {
        if(m%i==0 && n%i==0)
            gcd = i;
    }
    return gcd;
}
frctn frctn::add(frctn a,frctn b){
    frctn temp;
    int lcm = (a.dmr*b.dmr)/gcf(a.dmr,b.dmr);
    int sum=(a.nmr*lcm/a.dmr) + (b.nmr*lcm/b.dmr);
    int num3=sum/gcf(sum,lcm);
    lcm=lcm/gcf(sum,lcm);
    temp.nmr=num3;
    temp.dmr=lcm;
    return temp;
}
void frctn::sub(frctn* e,frctn* f){
    int lcm = ((e).dmr(*f).dmr)/gcf((*e).dmr,(*f).dmr);
    int sum=((*e).nmr*lcm/(*e).dmr) - ((*f).nmr*lcm/(*f).dmr);
    int num3=sum/gcf(sum,lcm);
    lcm=lcm/gcf(sum,lcm);
    nmr=num3;
    dmr=lcm;
}
void frctn::mul(frctn& p,frctn& q){
    int n1,d1;
    n1=(p.nmr*q.nmr);
    d1=(p.dmr*q.dmr);
    nmr=n1/gcf(n1,d1);
    dmr=d1/gcf(n1,d1);
}


int main(){
    frctn f1,f2,f3,f4,f5;
    int a,b;
    cout<<"\n ENTER NUMERATOR THEN DENOMINATOR: 1  ";
    cin>>a>>b;
    f1.enter(a,b);
    cout<<"\n ENTER NUMERATOR THEN DENOMINATOR: 2  ";
    cin>>a>>b;
    f2.enter(a,b);
    f3=f2.add(f1,f2);
    f4.sub(&f1,&f2);
    f5.mul(f1,f2);
    f3.show();
    f4.show();
    f5.show();
    return 0;

}