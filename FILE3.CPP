#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<fstream.h>
void main()
{
	ofstream  fcout("suchi.txt");
	char ch[30];
	cout<<"enter the number";
       //	fcin>>a; //writing}
	gets(ch);
	fcout<<ch;
	fcout.close();
	getch();
	}