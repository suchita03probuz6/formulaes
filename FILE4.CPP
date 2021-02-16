#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<fstream.h>
void main()
{
       //	ofstream  fcout("suchi.txt");
       //	char ch[30];
	//cout<<"enter the number";
       //	fcin>>a; //writing}
	ifstream fcin("suchi.txt");
	char ch[23];
	fcin>>ch;
	cout<<ch;
	fcin.close();

       //	gets(ch);
       //	fcout<<ch;
       //	fcout.close();
	getch();
	}