#include<iostream.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	cout<<"enter the no. to find even or odd:";
	cin>>x;
	if(x%2==0)
	{
		goto even;
	}
	else
	{
		goto odd;
	}
	even:cout<<"\n the even number is:"<<x;
	getch();
	return;
	odd:cout<<"\n the odd number is:"<<x;
	getch();
}