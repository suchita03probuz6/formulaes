#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main()
{ clrscr();
 int i,j,k;
 int num,z=1;
 cout<<"enter no of rows";
 cin>>num;
 for(i=1;i<=num;i++)
 {
	for(j=num-1;j>=i;j--)
	{
		cout<<" ";
		}
	for(k=1;k<=z;k++)
	{
		cout<<"*";
		}
		z+=2;
		cout<<endl;
		}
		getch();


 return 0;
}