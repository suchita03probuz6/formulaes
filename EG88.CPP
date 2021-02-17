#include <conio.h>
#include<iostream.h>
#include<stdio.h>
int main() 
{
   int n,k;
   int i, j;
   cout<<"Enter the number of rows: ";
   cin>>n;
   for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
           cout<<" ";
       		}
		for(k=1;k<=i;k++)
		{
	        cout<<i;
	    }

     cout<<endl;}
   getch();

}