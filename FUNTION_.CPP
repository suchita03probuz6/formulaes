#include<iostream>  
#include<stdio.h>
#include<conio.h>
  
class A  
{ 
public:  
   void fun(); 
}; 
  

void A::fun() 
{ 
   cout << "fun() called"; 
} 
  
int main() 
{ 
   A a; 
   a.fun(); 
   return 0; 
} 