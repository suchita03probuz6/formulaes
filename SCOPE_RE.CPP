#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class X {
   public:
   static int count;
};
int X::count = 10;  
int main () {
   int X = 0;   // hides class type X
   cout << X::count << endl;   
}