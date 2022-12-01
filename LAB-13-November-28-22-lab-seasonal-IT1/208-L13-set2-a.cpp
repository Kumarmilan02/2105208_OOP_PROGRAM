/*Write a program to create a class Mobile_Set, with model no, name, cost as the data member.
Create an array of objects and display the mobile details in the specified range using a friend function.*/
//2105208_MILAN KUMAR SAHOO

#include "iostream"
#include <bits/stdc++.h>
using namespace std;

class mobile_set 
{
    long int mod_num , cost;
    string name;
public :
    mobile_set() 
    {
        cout<<"\nEnter model number: ";
        cin>>mod_num;
        cout<<"\nEnter model name: ";
        cin>>name;
        cout<<"\nEnter cost: ";
        cin>>cost;
        cout<<"\n";
    }

    friend void findmob(mobile_set a , int min , int max);
};

void findmob(mobile_set a , int min , int max) {
    if(a.cost >= min && a.cost <= max) {
        cout<<a.name<<"\t"<<a.mod_num<<'\t'<<a.cost<<'\n';
    }
}

int main() {
    int min_cost , max_cost;
    mobile_set *p;
    cout<<"\nEnter no of mobile sets: ";
    int n;
    cin>>n;
    p = new mobile_set[n];

    for (int i = 0; i < n; ++i) {
        p[i];
    }

    cout<<"Enter min cost followed by max cost\n";
    cin>>min_cost>>max_cost;
    cout<<"\nDISPLAY UNDER RANGE: \n";

    for (int i = 0; i < n; ++i) {
        findmob(p[i] , min_cost , max_cost);
    }

    return 0;
}