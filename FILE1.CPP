#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<fstream.h>
void main()
{
	ofstream  fcout("suchi.txt");
	int a=2;
	cout<<"enter the number";
	fcout<<a; //writing}
	fcout.close();
	getch();
	}