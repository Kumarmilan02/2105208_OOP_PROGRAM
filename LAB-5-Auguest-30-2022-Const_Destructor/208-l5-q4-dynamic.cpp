//Write a C++ program using class to dynamically allocate two integer arrays, add them it to a third array and display all the arrays.

#include <iostream>
using namespace std;

class Array{
    int *p;
    int n;
    public:
        Array(){
            cout<<"\n ENTER SIZE: ";
            cin>>n;
            p=new int[n];
            int i=0;
            cout<<"\n ENTER ELEMENTS: "<<endl;
            for(i=0;i<n;i++){
                cin>>p[i];
            }
        }
        Array(int m){
            n=m;
            p=new int[n];
            int i=0;
            cout<<"\n ENTER ELEMENTS: "<<endl;
            for(i=0;i<n;i++){
                cin>>p[i];
            }

        }
        Array(int *x,int m){
            n=m;
            p=new int[n];
            int i=0;
            for(i=0;i<n;i++){
                p[i]=x[i];
            }
        }
        Array add(Array &r, Array &s){
            int ml=r.n+s.n;
            int *c= new int[ml];
            int i=0,j=0;
            for(i;i<r.n;i++){
                c[i]=r.p[i];
            }
            for(i;i<ml;i++,j++){
                c[i]=s.p[j];

            }
            Array temp(c,ml);
            return temp;


        }
        void display(){
            int i=0;
            cout<<"\n";
            for(i=0;i<n;i++){
                cout<<"|"<<p[i]<<"| ";
            }
        }

};
int main(){
    Array a1;
    Array a2(4);
    Array a3=a2.add(a1,a2);
    a1.display();
    a2.display();
    a3.display();
    return 0;
    
}