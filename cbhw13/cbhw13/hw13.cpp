#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int powergen(double,double);     //funtion prototype
    int main()

{ 

   double P,p,q,h,g ; 
  q=20;
  p=998;
  g= 9.81;
  h=10;
	P= q*p*g*h;  
	cout << "the power is generated " << P << endl; 
  
	{
  system ("pause"); 
   return 0; 
   }

	int powergen(double,double);     //funtion prototype
    int main()

{ 

   double P,p,q,h,g ; 
  q=20;
  p=998;
  g= 9.81;
  h=10;
  P= q*p*g*h;  
  cout << "The power is generated " << P << endl; 
  
} 
  system ("pause"); 
   return 0; 
}
