#include<conio.h>
#include<stdio.h>
#include<iostream.h>
int sum(int x,int y);
  int sum(int x, int y)
  {
	int z;
	z = x + y;
	return z;
  }
  int main()
  {
	int num1,num2,result;
	cout<<"enter 2 no";
	cin>>num1>>num2;
	result = num1 +num2;
	cout<<result;
	return 0;
	clrscr();

	getch();
	}








