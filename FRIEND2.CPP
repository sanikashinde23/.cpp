#include<iostream.h>
#include<conio.h>
class one //forward decleration
{
  int a,b;
  public:
	   void setA(int x,int y)
	   {
	     a=x;
	     b=y;
	   }
	   friend int add(one);
  };
  int add(one p)
  {
    return p.a+p.b;  //friend function body
  }
  void main()
  {
    int sum,a,b;
    clrscr();
    one q1;
    cout<<"\nEntr the value A and B:";
    cin>>a>>b;
    q1.setA(a,b);
    sum=add(q1);
    cout<<"\naddition of A+b:"<<sum;
    getch();
}