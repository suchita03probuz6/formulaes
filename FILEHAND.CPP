#include<fstream.h>
#include<stdio.h>
#include<conio.h>

void main()
{ clrscr();
 char a[100];
 //fstream fil_op("ABC.CPP",ios::in);
 fstream fil_op1("suchita.txt",ios::out);
// while(!fil_op.eof())
 //{
// fil_op.getline(a,100);
 //cout<<a; }
 fil_op1<<"testggsudgu";
 cout<<a;
 fil_op1.close();


 cout<<endl;
 getch();
 }