#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

class Rectangle
{
private:
	double length;
	double width;
	double perim;
	double a;
public:
	Rectangle(double L = 0.0, double W = 0.0)
	{length = L; width = W;}
	void perimeter()
	{perim = 2*length + 2*width;}
	void area()
	{a = length*width;}
	void setData()
	{cout << "Enter a width, followed by a length: "; cin >> width >> length;}
	void showData()
	{
		cout <<  setw(11) << right << "Length: " << length << endl;
		cout << right << setw(11) << "Width: " << width << endl;
		cout << right << setw(11) << "Area: " << a << endl;
		cout << right << setw(11) << "Perimeter: " << perim << endl;
	}
};

int main()
{
	Rectangle A;
	A.setData();
	A.perimeter();
	A.area();
	A.showData();

	system ("pause");
	return 0;
}