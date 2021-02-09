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
	void display() {

	cout << "\n\n\tRoll No    : " << rno << "\n\t name is     : " << name;
	cout << "\n\t address    : " << address;
    }

};

class sports : public student{
protected:
    int m1,m2,m3; // sm = Sports mark
public:
		void getsport(){
		cout<<"m1"<<endl;
		cin>>m1;
		cout<<"mark2 is:"<<endl;
		cin>>m2;
		cout<<"mark3 is"<<endl;
		cin>>m3;
		}
		void display_data1()
		{
			cout<<"m1"<<m1<<"m2"<<m2<<"m3"<<m3;
			}
			};


class exam :public student
{
	public :

		char paper1[10];
		char paper2[10];


	 void get_exam()
	 {
		cout<<"paper1 is:"<<endl;
		cin>>paper1;
		cout<<"paper2 is:"<<endl;
		cin>>paper2;


		}
		void display3()
		{
			cout<<"paper1"<<paper1<<"paper2"<<paper2;
			}
			};


class result : public exam , public sports{
  int total ,avg;
public :
	void display3()
{
	total=(m1+m2+m3);
	avg = total/3;
	cout<<"\n\t Total avg is :"<<avg;
}
};

void main() {
    clrscr();
    sports obj;
    obj.get();
    //obj.getsm();
    obj.display();
result  r1;
//r1.get();
//r1.get_sport();
//r1.display_data1();
//r1.display3();
exam e1;
	e1.get();
	e1.display();
    getch();
}