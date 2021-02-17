#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main()
{
 int i,j,k;
 int num;
 cout<<"enter no of rows";
 cin>>num;
 for(i=1;i<=num;i++)
 {
	for(j=num - 1;j>=i;j--)
	{
		cout<<" ";
		}
	for(k=1;k<=i;k++)
	{
		cout<<i<<" ";
		}
		i=i+1;
		cout<<endl;
		}
		getch();


 return 0;
}