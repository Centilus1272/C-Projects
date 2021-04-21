#include <iostream>
#include <cmath>
using namespace std;
int main()

{ 

double R, B;

cout << "Enter the radius of a circle\n ";
cin >> R;

B = 3.14159 * pow (R, 2); 
cout << "The area of the circle is\n " 
<< B; 

system("pause");

return 0;

}