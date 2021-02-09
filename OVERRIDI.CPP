#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class one

{
      public :
      void disp(){
	cout<<"one";
	}};
class two :public one
{
	public:
	void disp()
	{
	one::disp();
	cout<<"two" ;
	}
	};

	void main()
	{
	clrscr();
	two obj;
	obj.disp();
	getch();
	}