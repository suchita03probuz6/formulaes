#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main()
{clrscr();
 int i,j,k;
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
		cout<<"*";
		}
		 // k=k+1;
		cout<<endl;
		}
		getch();


 return 0;
}