//PROGRAM TO DEMOSTRATE VIRTUALFUNCTION

#include<iostream.h>
#include<conio.h>
class base
{
	public:
		virtual void show();
};
class derived:public base
{
	public:
		void show();
};
void base::show()
{
	cout<<"base class function called"<<endl;
}
void derived::show()
{
	cout<<"derived class function called"<<endl;
}
void main()
{
	clrscr();
	base*ptr;
	base B;
	derived D;
       //ptr=&B;
       //ptr->show;
	ptr=&D;
	ptr->show();
	getch();
}
