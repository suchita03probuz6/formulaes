#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main()
{       clrscr();
	int i,j,k;
	int num;
	int m=1;
	cout<<"enter no of row";
	cin>>num;
	for(i=1;i<=num;i++)
	 {
		for(j=num-1;j>=i;j--)
		{
			cout<<" ";
			}

		for(k=1;k<=m;k++)
		{
		 cout<<char (k+64);

			}   	 m+=2;
			cout<<endl;
			}
			getch();
			return 0;
	}
