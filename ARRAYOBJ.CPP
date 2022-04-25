#include<iostream.h>
#include<conio.h>
class student
{
 private:
	int rollno;
	char name[10];
	char sclass[20];
 public:
	void get();
	void put();
};
void student::get()
{
	cout<<"enter rollno:->";
	cin>>rollno;
	cout<<"enter name:->";
	cin>>name;
	cout<<"enter class:->";
	cin>>sclass;
}
void student:: put()
{
	cout<<rollno<<name<<sclass<<endl;
}
main()
{
clrscr();
int i;
student s[2];
for(i=0;i<5;i++)
{
   s[i].get();
}
cout<<"********************************"<<endl;
cout<<"rollno\t\tname\t\tclass"<<endl;
cout<<"********************************"<<endl;

for(i=0;i<5;i++)
{
   s[i].put();
}
}





































































































































































































































































