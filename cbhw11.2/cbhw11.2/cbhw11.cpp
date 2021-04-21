#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int a=2, t;
	double P, e;
	
	e=2.71828;
	do
	{
	for(t=1;t<10;t++) 
	{
		P=1-pow(e,-t/a);
		cout << " For time = " << t << ", P = " << P << endl;
	}	

	system("pause");
	return 0;
}

