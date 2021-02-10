#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class opera
{
public :
 int a,b;
 public :
 void operator -()
 {
	a=-a;
	b=-b;
	}
	void set(int x,int y)
	{
		a=x;
		b=y;
		}
	void display()
	{
		cout<<"\a"<<a;
		cout<<b;
		}
		};
		int main()
		{
			clrscr();
			opera ob;
			ob.set(-1,2);

			-ob;
			ob.display();
			getch();
			}
