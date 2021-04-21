#include<iostream>
#include<cmath>
using namespace std;


int main ()
{
	double KV,v,d,x;

for (x=1;x<4;x++)
{
cout<< "Enter the viscosity\n";
cin>>v;

cout<<"Enter the density\n";
cin>>d;

KV=v/d;
cout<<"Kentic Viscosity is\n"<< KV<<endl;

}

system("pause");
return 0;
}