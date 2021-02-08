#include<iostream>
#include<stdio.h>
#include<conio.h>

int main()
{
	int p,r,t,i;
		cout << "\n\n Calculate the Simple Interest :\n";
		
	cout<<" Input the Principle: ";
	cin>>p;
	cout<<" Input the Rate of Interest: ";
	cin>>r;
	cout<<" Input the Time: ";
	cin>>t;
	i=(p*r*t)/100;
	cout<<" The Simple interest for the amount "<<p<<" for "<<t<<" years @ "<<r<<" % is: "<<i;
        cout << endl;
	return 0;
}