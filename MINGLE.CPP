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

/*class statement : public student, public sports {
    int tot, avg;
public:

};*/

void main() {
    clrscr();
    sports obj;
    obj.get();
    obj.getsm();
    obj.display();
    getch();
}