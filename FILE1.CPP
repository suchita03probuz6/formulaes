#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<fstream.h>
void main()
{ clrscr();
 char a[100];
 fstream fil_op1("vansh.txt",ios::in);

 fstream fil_op("vansh1.txt",ios::out);
 while(!fil_op.eof())
{
	fil_op1.getline(a,100);
	cout<<a<<"\n";
	fil_op<<a<<endl;


 }

 fil_op.close();
 cout<<endl;
 getch();
 }