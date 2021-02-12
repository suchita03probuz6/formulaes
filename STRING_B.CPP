#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
class binoper
{       public :
	char name[10];
	char b[12];
	 public :
	void set(char n[])
	{
	strcpy(name,n);
	 }
	void add(binoper ob1,binoper ob2)
	{
	strcpy(name,ob1.name);
	strcat(name,ob2.name);
	}


	 void display()
	 {
		cout<<name;
		}       };


		int main()
		{         clrscr();
		     binoper ob1,ob2,ob3;
		      ob1.set("ram");
		      ob2.set("geeta");
		      ob3.add(ob1,ob2);
		      ob3.display();


			getch();
			}