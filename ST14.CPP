#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main()
{
	int i,j,k,l,m;
	int num;
	cout<<"enter no of row";
	cin>>num;
	for(i=1;i<=num;i++)
	 {
		for(j=1;j<=num-i;j++)
		{
			cout<<" ";
			}
		m=1;
		for(k=1;k<=i;k++)
		{
		 cout<<char (m+64);
		 m++;
			}
		 m=m-1;
		 for(l=1;l<i;l++)
		 {
			cout<<m;
			m++;
			}
			cout<<endl;
			}
			getch();
			return 0;
	}
