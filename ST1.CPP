#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
int main()
{ clrscr();
 int i,j,k;
 int num=3;
// cout<<"enter no of rows";
 //cin>>num;
 for(i=num;i>=-3;i--)
 {
	for(j=num;j>=abs(i);j--)
	{
		cout<<"* ";
		}

		cout<<endl;
		}
		getch();


 return 0;
}