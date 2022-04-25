 #include<iostream.h>
#include<conio.h>
int fib(int);
	void main()
{
	clrscr();
	int a,b,c,n,i;
	cout<<"\n enter the no. to find fibonacci searies \n";
	cin>>n;
	cout<<"\n fibonacci searies is \n";
	a=0;
	b=1;
	i=1;
	cout<<a<<"\n\t"<<b;
	while(i<n-1)
	{
	c= fib(i);
	cout<<"\n\t"<<c;
	i++;
	}
	getch();
}
int fib(int k)
{
	if(k==0 || k==1)
	return 1;
	else
	return(fib(k-1)+fib(k-2));
}





