#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>
class one {
	public :
	char *name;
	int len;
	one()
	{
		len=0;
		name = new char[len];
	}

	one(char n[])
	{
		len = strlen(n);
		name = new char[len+1];
		strcpy(name,n);
		}

		void dis()
		{
		cout<<name<<""<<len;
		}
		~one()
		{
		cout<<"distructor";
		} };
		void main()
		{
		clrscr();
		one ob1("rammm"),ob2,ob3;
		ob1.dis();
		getch();
		}