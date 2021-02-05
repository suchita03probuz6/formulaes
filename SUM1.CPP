#include<stdio.h>
#include<conio.h>
#include<iostream.h>


class sum
{     	public:
	int a ;
	  int b;


	sum1()
	{
		return a+b;
		}
	};
	int main()
	{
	sum sum2;
	clrscr();
	sum2.a =2;
	sum2.b = 3;
	cout<<"enter a no1:"<<sum2.sum1()<<endl;
	getch();
	return 0;
	}