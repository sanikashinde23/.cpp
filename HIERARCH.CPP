#include<iostream.h>
#include<conio.h>
class stud
{
	char name[20];
	int prno;
	public:void get();
		void put();
};
void stud::get()
{
	cout<<"\nenter name & premanentregertration no:\n";
	cin>>name>>prno;
}
void stud::put()
{
	cout<<"\nthe name and permanent reg.no is";
	cout<<"\nname:"<<name<<"\tpermanent reg.no"<<prno;
}
class art:public stud
{
	protected:int fcode;
		char sub[20];
	public:void get1();
		void put1();
}
void art::get1()
{
	get();
	cout<<"\nenter the faculty code and subject name:";
	cin>>fcode<<sub;
}
void art::put1;
{
	put();
	cout<<"\faculty code:"<<fcode<<"\tsubject name:"<<sub;
}
class medical:public stud
{
	int fc;
	char s1[20];
	public:void get2();
		void put2();
};
void medical::get2()
{
	get();
	cout<<"\nenter faculty code and subject name:";
	cin>>fc>>s1;
}
void

