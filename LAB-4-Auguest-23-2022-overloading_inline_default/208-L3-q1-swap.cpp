//WAP to swap private data member of two classes.(The classes have no relation with each other)

#include"iostream"
using namespace std;
class B;
class A
{
    int data1;
    public:
        void input(int a)
        {
            data1=a;
        }
        void display(void)
        {
            cout<<"DATA1 is: "<<data1<<"\n";
        }
    friend void swap(A &,B & );
};
class B
{
    int data2;
    public:
        void input(int a)
        {
            data2=a;
        }
        void display(void)
        {
            cout<<"DATA2 is: "<<data2<<"\n";
        }
     friend void swap(A &,B & );
};
void swap(A &p, B &q)
{
    int temp= p.data1;
    p.data1 = q.data2;
    q.data2 = temp;
}
int main()
{
    A obj1;
    B obj2;
    obj1.input(5);
    obj2.input(6);
    cout<<"\nVALUES BEFORE SWAPING: "<<"\n";
    obj1.display();
    obj2.display();
    swap(obj1,obj2);
    cout<<"\nVALUES AFTER SWAPING: "<<"\n";
    obj1.display();
    obj2.display();
    return 0;

}