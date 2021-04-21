#include<iomanip>
#include<iostream>
#include<cmath>

using namespace std; 

int main()
{ 
	const int MAXROWS = 3; 
	const int MAXCOLUMNS = 5; 

	int i,j; 
	double a,b,c,d,e, voltage[MAXROWS][MAXCOLUMNS]; 

	a = 0 ;
	b = 0 ;
	c = 0 ;
	d = 0 ;
	e = 0 ;
	
	for( i = 0; i < MAXROWS; i++) 
	{ 

	for( j = 0; j < MAXCOLUMNS; j++) 
	{
		cout << "enter the 15 numbers needed to do the evaluation, 1 at a time \n"; 
		cin >> voltage[i][j]; 

		if(voltage[i][j] < 60) 
		{
			a = a + 1 ; 
		}
		if(voltage[i][j] >= 60 && voltage[i][j] < 70 ) 
		{ 
			b = b + 1;
		} 
		if( voltage[i][j] >= 70 && voltage[i][j] < 80 ) 
		{ 
			c = c + 1; 
		}
		if ( voltage[i][j] >= 80 &&  voltage[i][j] < 90 ) 
		{ 
			d = d + 1; 
		} 
		if( voltage[i][j] >= 90) 
		{ 
			e = e + 1; 
		} 

	}
	} 
	cout << "The amp voltage ranges:\n " << a << " voltages less than 60 \n" << b << " voltages between 60-69 \n" << c
		<< " voltages between 70-79 \n " << d << " voltages between 80-89 \n " << e << " voltages greater than 90 \n"; 
	
	system("pause"); 
	return 0;

}