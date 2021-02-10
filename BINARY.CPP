#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class binoper
{       public :
	int a,b;
	 public :
	void set(int x,int y)
	{
	 a=x;
	 b=y;
	 }

	 void operator +(binoper cob2)
	 {
		int c = a+ cob2.a;
		int d = b+cob2.b;
		cout<<c<<d;
	 }
	 void display()
	 {
		cout<<a<<b;
		}       };


		int main()
		{         clrscr();
			binoper ob1,ob2;
		      ob1.set(2,3);
		      ob2.set(4,5);

			ob1+ob2;

			getch();
			}