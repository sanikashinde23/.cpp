#include<iostream.h>
#include<conio.h>
class stud
{
protected:
		void get()
		void put()
};
void stud::get()
{
	cout<<"\nenter the roll no";
	cin>>roll no;
}
void stud::put()
{
	cout<<"\nroll no is:"<<rollno;
}
class test:public stud
{
protected:
	int sub1,sub2;
public:
	void getmar();
	void putmar();
};
void test::getmar()
	{
		cout<<"\nenter marks of sub1";
		cin>sub1;
		cout<<"\nenter marks of sub2";
		cin>>sub2;
	}
void test::putmar()
	{
		cout<<"\nsub1:"<<sub1;
		cout<<"\nsub2:"<<sub1;
	}
class result:public test
	{
		protected:int total;
				  void display();
	};
void result::display()
	{
		total=sub1+sub2;
		put();
		putmar();
		cout<<"\ntotal:"<<total;
	}
void main()
{
	result r;
	clrscr();
	r.get();
	r.getmar();
	r.display();
	getch();
}