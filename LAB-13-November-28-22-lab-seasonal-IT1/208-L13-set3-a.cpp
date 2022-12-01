/*A) Write a CPP program to create a template function to find the greatest of three numbers.
Please don't create copies of the argumnts while passing them as parameters and neither modify them inside the function.*/
//2105208_MILAN KUMAR SAHOO

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template <class T>
T greatest(T &a , T &b , T &c) 
{
    T ar[3] = { a , b ,c};
    T max = ar[0];
    T i = 0;
    while(i < 3) {
        if(ar[i] > max) max = ar[i] ;
        i++;
    }
    return max;
}

int main() {
    int a = 1 , b = 2 , c = 3;
    cout<<"\nGREATEST IS: "<<greatest<int>(a ,b , c);
    return 0;
}