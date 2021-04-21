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

for (x = -10; x <= 12; x++)
{

y = 4*pow(x, 3.0) - pow(x, 4.0);

line[y] = '*'; 

cout << line << endl; 

line[y] = ' '; 

}

system("pause");
return 0;
}