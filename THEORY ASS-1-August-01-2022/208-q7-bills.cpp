//Write a program to enter the code, name and price of items. The user must feed the quantity in which he wants a product. 
//The program must calculate and display the final bill of 10 items in the following format.
//  Sl.No. Code       Name        Price Quantity Total
//-------------------------------------------------------------------------------------
//  1.     rib001  Printercatrige 300    2        600
//  2.     Pap45   A4 size paper  200    0          0
//  3.     Bk216   Computer book  350    5       1750
//--------------------------------------------------------------------------------------
//                                    Total = Rs.2350/-

#include <iostream>
#include <string.h>
using namespace std;

class shop
{
  int code[10];
  int price[10];
  char name[10][10];
  int quant[10] = { 0 };
public:
    void setList() {
        for(int i = 0 ; i < 10 ; i++) {
            cout<<"enter code of product";
            cin>>code[i];
            cout<<"enter price of product";
            cin>>price[i];
            cout<<"enter name of product";
            cin>>name[i];
        }
    }
  void showList ()
  {
    cout << "Sl.No.\tCode\tName\tPrice";
    for (int i = 0; i < 10; i++)
      {
	cout << i << '\t' << code[i] << '\t' << name[i] << '\t' << price[i] <<
	  endl;
      }
  }

  void custReq (int sl, int q)
  {
    quant[sl] += q;
  }

  void showBill ()
  {
    cout << "Sl.No.\tCode\tName\tPrice\tquantity\ttotal";
    for (int i = 0; i < 10; i++)
      {
        int total = 0;
        if(quant[i] > 0) {
            total += quant[i]*price[i];
            cout<<i<<"\t"<<code[i]<<"\t"<<name[i]<<"\t"<<price[i]<<"\t"<<quant[i]<<"\t"<<name[i]<<endl;
        }
        cout<<"\t\t\t\t"<<total<<endl;
      }
  }
};

int main ()
{
    shop s;
    cout<<"enter items for list :-\n";
    s.setList();
    s.showList();
    int n , q;
    cout<<"enter serial number of product\n";
    cin>>n;
    cout<<"enter quantity for the item required\n";
    cin>>q;
    s.custReq( n , q);
    s.showBill();
  return 0;
}