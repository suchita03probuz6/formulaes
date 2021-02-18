#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
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
			cout<<"";
			}

		for(k=i-1;k>=-(i-1);k--)
		{
		 cout<<i-abs(k)<<"";

			}   	 m+=2;
			cout<<endl;
			}
			getch();
			return 0;
	}
