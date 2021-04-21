
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double find_root(double, double, double, double);

int main()
{
	double a, b, c, d, disc;

	cout << "This program finds the roots of ax^2 + bx + c" << endl;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << "Enter the value of c: ";
	cin >> c;

    disc = (b*b - 4*a*c);

    d = sqrt(disc);

	if (a == 0 && b == 0)
		cout << "The equation has no solution." << endl;
    else if (disc < 0)
		cout << "There are no real roots to the equation" << endl;
    else if (disc > 0)
    {
        cout << "First root: " << find_root(a,b,c,d) << endl;
        d = -sqrt(disc);
        cout << "Second root: " << find_root(a,b,c,d) << endl;
    }

//	system ("pause");

	return 0;
}
double find_root(double a, double b, double c, double d)
{
    double root;

	root = (-b + d) / 2*a;

    return root;
}
