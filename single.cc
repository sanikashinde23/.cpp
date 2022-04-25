#include<iostream.h>
#imclude<conio.h>
class art
{
protected:
		char name[20];
		int mark;
public:
		void get()
		{
			cout<<"\nenter the name of student":;
			cin>>name;
			cout<<"\nenter the marks of student":;
			cin>>marks;
		}
};
class result:public art
{
punlic:
	void display()
	{
		cout<<"\nname of student"<<name;
		cout<<"\nmark of student"<<mark;
	}
};
void main()
{
	clrscr();
	result r;
	r.get();
	r.display();
	getch();
}