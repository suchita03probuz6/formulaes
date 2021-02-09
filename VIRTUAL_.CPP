#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class one

{
      public :
  virtual void disp()=0;

   };
class two :public one
{
	public:
      void disp()
	{

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