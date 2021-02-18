#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main()
{clrscr();
 int j,k;
 int i;
 int num;
 cout<<"enter no of rows";
 cin>>num;
 for(i=num;i>=1;i--)
 {
	for(j=1;j<=num-i;j++)
	{
		cout<<" ";
		}
	for(k=1;k<=i*2-1;k++)
	{
		cout<<char (i+64);
		}
		 i=i-1;
		cout<<endl;
		}
		getch();


 return 0;
}