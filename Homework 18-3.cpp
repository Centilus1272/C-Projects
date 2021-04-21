#include <iostream>
#include <cmath>
using namespace std;

int main()
{

int x, y;
char label[] = "                 y axis";
char axis[] = "+-------------------------------------------->";
char line[] = "|                                             ";

	cout << label << endl;
	cout << axis << endl;

for (x = 0; x <= 6; x++)
{
	y = 0.25*pow(x, 3.0) - 2*pow(x, 2.0) + 3*x + 6;

	line[y] = '*'; 

	cout << line << endl; 

	line[y] = ' ';
	
}

system("pause");
return 0;
}