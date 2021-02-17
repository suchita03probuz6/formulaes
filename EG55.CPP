#include<conio.h>
#include<iostream.h>
#include<stdio.h>

void main()
{
	int i,j,n,k;
	char ch='A';
	cout<<"Enter the no. of rows : ";
	cin>>n;

	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
	   cout<<" ";
       }
		for(k=1;k<=i;k++)
		{
		cout<<ch<<" ";
	    }
	    ch++;
	    cout<<endl;
	}
    getch();

}
