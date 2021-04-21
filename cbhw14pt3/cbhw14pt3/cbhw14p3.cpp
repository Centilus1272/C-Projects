#include <iostream>
#include <iomanip>

using namespace std;

void yearCalc(int, int&, int&, int&);

int main()
{
	int  days, year, month, day;

	
		cout << "Enter days after January 1, 2000: \n";
		cin >> days;

		yearCalc(days, year, month, day);

		if (day == 0)
			day = day++;
		else
			day;
		
		cout << "The date after January 1st, 2000 will be as followed \n"<< month << "    " << day << "      " << year << endl;

	system("pause");
	return 0;
}

void yearCalc(int d, int& y, int& m, int& day) 
{
	int am;
	y = d / 365 + 2000;
	am = d % 365;
	m = am / 30;
	am = am % 30;
	day = am;	
}