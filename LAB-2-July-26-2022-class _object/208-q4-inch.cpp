//CREATE A CLASS DISTANCE (FEET ,INCH).INPUT 2 DISTANCE VALUES IN OBJECT,ADD THEM ,STORE THEM IN OBJECT AND DISPALY THE RESULANT DISTANCE. 
//STORE THE RESULANT DISTANCE IN CALLING OBJECT.
// 1. c3.add(c1,c2)
// 2. c3=c2.add2(c1,c2)
// 3. return the resulant object c3=c1.add3(c2)

#include <iostream>
using namespace std;

class dis{
    private:
        int feet,inches;
    public:
        void enter(int a, int b);
        void show();
        void add(dis p, dis q);
        dis add1(dis p, dis q);
        dis add2(dis p);
};

void dis::enter(int a, int b){
    feet=a;
    inches=b;

}
void dis::show()
{
        cout<<"\nTHE DISTANCE: \n";
        cout<<feet<<" feet "<<inches<<" inches";
}

void dis::add(dis p, dis q)
{
    inches=p.inches+q.inches;
    feet=p.feet+q.feet+(inches/12);
    inches=inches%12;

}
dis dis::add1(dis p, dis q){
    dis temp;
    temp.inches=p.inches+q.inches;
    temp.feet=p.feet+q.feet+(temp.inches/12);
    temp.inches=(temp.inches)%12;
    return temp;
}
dis dis::add2(dis p){
    dis temp;
    temp.inches=p.inches+inches;
    temp.feet=p.feet+feet+(temp.inches/12);
    temp.inches=(temp.inches)%12;
    return temp;
}

int main(){
    cout<<"\n THE DISTANCE PROGRAM: 3 TYPES: \n";
    int a,b,c,d;
    dis c1,c2,c3,c4,c5;
    cout<<"\n ENTER FEET1: ";
    cin>>a;
    cout<<"\n ENTER INCHES1: ";
    cin>>b;
    cout<<"\n ENTER FEET2: ";
    cin>>c;
    cout<<"\n ENTER INCHES2: ";
    cin>>d;
    c1.enter(a,b);
    c2.enter(c,d);
    c3.add(c1,c2);
    c3.show();
    c4=c4.add1(c1,c2);
    c4.show();
    c5=c2.add2(c1);
    c5.show();
    return 0;
}
