#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class one
{
	public :
	void disp()
	{
		cout<<"one";
		}
		};
		class two :public one
		{
		void disp()
		{
		cout<<"two";  }
		};
	void main()
	{
		clrscr();

		one ob,*obpt;
		obpt=&ob;
		obpt->disp();
		two ob1;
		obpt=&ob1;
		obpt->disp();
		getch();
		}
