 #include<conio.h>
#include<stdio.h>
#include<iostream.h>
int main()
{
clrscr();
	int i,j;
	char ch = 'A';

	for(i=1;i<=4;i++)
	{
	 for(j=1;j<=5;j++)
	 {
		cout<<(char)(i+64);
		ch++;
		}
		cout<<"\n";
		}
		getch();
		}