//Create a class which stores name, author and price of a book. Store information for n number of books. 
//Display information of all the books in a given price range using friend functin.

#include <iostream>
#include <string.h>
using namespace std;

class book {
    string name;
    string author;
    int price;
public:
    void create(string n , string a , int p) {
        name = n;
        author = a;
        price = p;
    }
    friend void display(book *, int , int , int);
};

void display(book *b , int n , int lower , int upper ){
    for(int i = 0 ; i < n ; i++) {
        if((b+i)->price >= lower && (b+i)->price <= upper) {
            cout<<i+1<<"\t"<<(b+i)->name<<"\t"<<(b+i)->author<<"\t"<<(b+i)->price<<endl;
        }
    }
}

int main() {
    cout<<"enter the number of books to include: ";
    int n;
    cin>>n;
    book b[10];
    int i = 0;
    while(i < n) {
        string name;
        string author;
        int price;
        cout<<"\nEnter name of book"<<i+1<<":";
        cin>>name;
		cout<<"name of author: ";
		cin>>author;
		cout<<"price of the book: "<<"\n";
		cin>>price;
        b[i].create(name , author , price);
        i++;
    }
    cout<<"enter the highest you are willing to pay\n";
    int high;
    cin>>high;
    cout<<"enter the lowest you are willing to pay\n";
    int low;
    cin>>low;
    cout<<"The books sattisfying the given range are :- \n";
    display(b , n , low , high);
    
    return 0;
}
