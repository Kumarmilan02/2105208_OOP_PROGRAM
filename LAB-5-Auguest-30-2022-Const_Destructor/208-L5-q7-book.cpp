//A book shop maintains the inventory of books that are being sold at the workshop.
//The list includes details such as author, title, price, publisher and stock position.
// Whenever a customer wants a book, the sales person inputs the title and author and the system searches the list and displays whether it is available or not.
//If it is not, an appropriate message is displayed. If it is, then the system displays the book details and requests for the number of copies required. 
//If the requested copies are available, the total cost of their quested copies is displayed otherwise the message “Required copies not in stock” is displayed. 
//WAP using a class called Books with suitable member functions and constructors.//

#include <iostream>
using namespace std;
class book{
        string title;
        string aut_nam;
        string plshr;
        float price;
        int stock;
    public:
        book(string x,string y,string z,float p,int s){
            title=x;
            aut_nam=y;
            plshr=z;
            price=p;
            stock=s;
        }
        int search(string x);
        void purchase();

};
int book::search(string x){
    if(x==title){
        return 1;
    }
    else{
        return 0;
    }
}
void book::purchase(){
    int a;
    if (stock>0){
        cout<<"\n DETAILS: ";
        cout<<"\nBOOK NAME\t\t\tAUTHOR\t\t\tPUBLISHER\t\t\tPRICE(PER UNIT)\t\t\tTOTAL STOCKS\n";
        cout<<"======================================================================================================\n";
        cout<<title<<"\t\t\t"<<aut_nam<<"\t\t\t"<<plshr<<"\t\t\t"<<price<<"\t\t\t"<<stock<<endl;
        cout<<"\n ENTER QUANTITY TO BUY: ";
        cin>>a;
        if((stock-a)>=0){
            stock=stock-a;
            cout<<"\nTotal Price: "<<(price*a)<<endl;
        }
        else{
            cout<<"\n REQUIRED COPIES NOT IN STOCK.";
        }
    }
    else{
        cout<<"\n STOCK EMPTY.";
    }
}


int main(){
    book bk[3]={book("Advanced Mathematics","RS Agrawal","Dhyanchand PS",495.00,25),
                book("Concept of Physics","HC Verma","Dhyanchand PS",737.25,40),
                book("Programming in Ansic","E.Balgurusamy","Tata McGraw",630.50,20)};
    int a,d,n;
    int i,j,k;
            string ti2;
            int c;
            int cnt=0;
            cout<<"\n ENTER NAME OF BOOK: ";
            getline(cin,ti2);
            for(i=0;i<3;i++){
                c=bk[i].search(ti2);
                if(c==1){
                    cnt+=1;
                    bk[i].purchase();
                }
                
            }
            if(cnt==0){
                cout<<"\n BOOK NOT FOUND. ";
                
            }
        
    return 0;
    
    
}