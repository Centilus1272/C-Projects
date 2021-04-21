#include<iostream>
#include<cmath>
using namespace std;
void   annulusMoment (double, double);          //function prototype
int main()

{ 
	double r1,r2;
	cout<<" Enter inner radius";//
	cin>>r1;
	cout<<"Enter outer radius";
	cin>>r2;
	


	annulusMoment (r1,r2); // function is called here 
	system("pause");
	return 0;
}

	// Following is the FindMax() function
void annulusMoment (double r2, double r1)
{  
	const double Pi=4*(atan(1.0)); ;                  //Start the function
	double I;               //variable declaration
	I=Pi/4*(pow(r2,4)-(pow(r1,4)));

	cout<<I;
	system("pause");
	return ;
}

