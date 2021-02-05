#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void area();
void rectangle();
void year();
void table();
void perimeter();
void prime(int n);
// bool primen_no(int n);
// void circle(int *s, int *n);
void main()
{       int s=2,n=3;
	area();
	rectangle();
	year();
	table();
	perimeter();
	// primen_no(int n);
     //	circle(&s,&n);
	getch();
	}
	void area()
	{
	  int a, b,c;
	  cout<<"enter value" ;
	  cin>>a;
	  c=a*a;
	  cout<<"area of square of value:"<<c<<endl;

	}
	void rectangle()
	{
	  int a,b,c;
	  cout<<"enter value";
	  cin>>a>>b;
	  c=a*b;
	  cout<<"area of rectangle is:"<<c<<endl;
	  }
     /*	void circle(int *x, int *y)
	{
	cout<<"value of x & y is:";
	cin>>x>>y;
	int z= 2 * 3.14 * x * y ;
	cout<<"area of circle is :"<<z<<endl;
	} */
	

void perimeter()
{
	
	  int a, b,c,z;
	  cout<<"enter value" ;
	  cin>>a;
	  c=a+b+z;
	  cout<<"\n perimeter of rectangle is:"<<c<<endl;

	}

/* void prime()
{
	int n;
	cout<<"enter value" ;
	cin>>n;
	if (primen_no(n))
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";
    
}

  primen_no(int n) {
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}
	
*/







/* This function returns integer value.  */
int prime(int n)
{
    int i;
    for(i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
            return 1;
    }

    return 0;
}