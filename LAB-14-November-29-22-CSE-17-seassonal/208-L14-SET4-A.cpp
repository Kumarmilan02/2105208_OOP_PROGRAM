/*Write a program to create a class Mobile Model to store the price, modelno, memory capacity and camera_pixel. 
Input the details of mobile phones with two different models. 
Diplay the details of the phone having higher camera pixel using necessary member function.*/
//2105208_MILAN KUMAR SAHOO
#include <iostream>
using namespace std;

class phone{
    int pri,mod,memo,cam;
public:
    phone(int a=0,int b=0,int c=0, int d=0){
        pri=a;
        mod=b;
        memo=c;
        cam=d;
    }
    void show(){
        cout<<"\nPrice "<<pri<<"\nModel "<<mod<<"\nMemory "<<memo<<"\nCam pix "<<cam<<endl;
    }
    int getcam(){
        return cam;
    }
};
int main() {
    phone p1(22,33,44,55),p2(11,22,33,66);
    if(p1.getcam()>p2.getcam()){
        p1.show();
    }
    else
        p2.show();
    return 0;
}