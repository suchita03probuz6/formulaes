#include<iostream.h>
#include<conio.h>

class student {
protected:
    int rno;
    char name[10];
    char address[20];

public:

    void get() {
	cout << "Enter the Roll no :";
	cin>>rno;
	cout << "Enter name   :";
	cin >> name;
	cout<<"enter address:";
	cin>>address;
    }
};

class sports: public student {
protected:
    int sm; // sm = Sports mark
public:

    void getsm() {
	cout << "\nEnter the sports mark :";
	cin>>sm;

    }

    void display() {

	cout << "\n\n\tRoll No    : " << rno << "\n\t name is     : " << name;
	cout << "\n\t address    : " << address;
    }
};

class exam :public sports
{
	public:
			int m1,m2;
		 void getsport()
	 {
			cout<<"mark1 is:";
			cin>>m1;
			
			cout<<"mark2 is:";
			cin>>m2;
			
			}

	void display1()
		{
			cout<<"mark1 is"<<m1<<"mark2 is :"<<m2;
			}
			};



void main() {
    clrscr();
    sports obj;
    obj.get();
    obj.getsm();
    obj.display();
    exam e1;
    e1.getsport();
    e1.display1();
    e1.getsm();
    e1.display();
    getch();
}