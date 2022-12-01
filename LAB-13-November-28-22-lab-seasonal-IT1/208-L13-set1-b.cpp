/*Write a program to create a class which stores an 2D integer array as data member.
Overload the following operators 
-Assignment operator(=) to copy from one object to another 
-Unary post increment operator using friend function to increment all the elements of the matrix by 1*/
//2105208_MILAN KUMAR SAHOO


#include <iostream>
using namespace std;

class twodarr
{
    int mat[3][4];
    public:
        void getdata()
        {
            cout<<"\n ENTER ELEMENTS: ";
            for(int i=0;i<3;i++){
                for(int j=0;j<4;j++){
                    cout<<"\n ENTER ELEMENT: ";
                    cin>>mat[i][j];
                }
            }
        }
        void display()
        {
            cout<<"\n==DISPLAY==\n";
            for(int i=0;i<3;i++){
                for(int j=0;j<4;j++)
                {
                    cout<<"|"<<mat[i][j];
                }
                cout<<"\n";

            }   
        }
        twodarr const operator =(twodarr& c){
            for(int i=0;i<3;i++){
                for(int j=0;j<4;j++){
                    mat[i][j]=c.mat[i][j];   
                }

            }
        }
        friend twodarr operator++(twodarr& c,int){
            twodarr p;
            for(int i=0;i<3;i++){
                for(int j=0;j<4;j++){
                    p.mat[i][j]=c.mat[i][j]++;   
                }

            }
            return p;

        }
};
int main(){
    twodarr t1,t2;
    t1.getdata();
    t1.display();
    t2=t1;
    t2.display();
    twodarr t3=t2++;
    t3.display();
    t2.display();
    return 0;

}