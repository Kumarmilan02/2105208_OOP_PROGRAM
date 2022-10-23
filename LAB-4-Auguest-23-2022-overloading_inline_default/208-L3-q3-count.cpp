//Create a class with an integer data member. Include functions for input and output in class. 
//Count the number of times each function is called and display it.

#include<iostream>
using namespace std;

class Data
{
	private:
		int x;
		static int in;
		static int out;
	public:
		void input(); //Inputting data
		void output();//Displaying the entered data
		void display();//Displaying the number of times the two above functions has been called
};
int Data::in=0;
int Data::out = 0;
	void Data::input()
    {
		cout<<"\nEnter the value of x:";
		cin>>x;
		in++;
	}
	void Data::output()
    {
		cout<<"The value of x is: "<<x<<endl;
		out++;
	}
    void Data::display()
    {
		cout<<"The input function has been called  "<<in<<" times\n";
		cout<<"The output function has been called  "<<out<<" times\n";
	}
int main(){
	Data d;
	d.input(); //Calling the function the first time
	d.output();
	d.input();
	d.output();
	d.input();
	d.input();
	d.input();
	d.display();
}
