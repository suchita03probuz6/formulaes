#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int add(int a, int b)
{
	return a+b;
	}
	void main()
	{
		clrscr();
		int(*funt)(int,int);
		funt = add;
		int sum = funt(7,8);
		cout<<"value of sum is:"<<sum<<endl;

		getch();
		}