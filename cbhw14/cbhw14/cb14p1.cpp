#include <iostream>
#include <iomanip>
using namespace std;


void change(int, int&, int&, int&, int&, int&, int&);

int main()
{
	double amont;
	int hund, fif, tw, tn, fv, one;

	cout << "Enter the total amount of money you desire change for" << endl;
	cin >> amont;

	change(amont, hund, fif, tw, tn, fv, one);
	
	system("pause");
	return 0;
}
void change(int amont, int& hund, int& fif, int& tw, int& tn, int& fv, int& one)
{
	hund = amont;
	cout << "The change would be \n" << hund / 100 << " Hundreds " << endl;
	fif = hund % 100;
	cout << fif / 50 << " Fifties " << endl;
	tw = fif % 50;
	cout << tw / 20 << " Twenties " << endl;
	tn = tw % 20;
	cout << tn / 10 << " Tens " << endl;
	fv = tn % 10;
	cout << fv / 5 << " Fives " << endl;
	one = fv % 5;
	cout << one / 1 << " Ones " << endl;

	return;
}