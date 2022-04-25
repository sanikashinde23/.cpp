//program to demostrate unary operator ovarloading
#include<iostream.h>
#include<conio.h>
class unary
{
	private:
		int a,b,c;
	public:
		void get();
		void operator-();
		void show();
};
void unary::get()
{
	cout<<"enter the value of a=";
	cin>>a;
	cout<<"enter the value of b=";
	cin>>b;
	cout<<"enter the value of c=";
	cin>>c;
}
void unary::operator -()
{
	a=-a;
	b=-b;
	c=-c;
	cout<<"**********************"<<endl<<endl;
	cout<<endl;
}
void unary::show()
{
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"C="<<c<<endl;
}
main()
{
	clrscr();
	unary u;
	u.get();
	-u;
	u.show();
	getch();
}





































































































































































































































































