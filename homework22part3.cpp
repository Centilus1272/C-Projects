#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <limits>
#include <string>
using namespace std;
int main()
{
char ch;
int count = 0;
char buffer[] = "This is a string of information and data with no  exchangne vaule";
cout << "Enter the type of  letter that you want  to indentify in the string : ";
cin >> ch;
cout << "\n"<<buffer <<endl;
for (int i = 0; i < (strlen(buffer)); i++)
{
  if (buffer[i] == ch)
    {
    count++;
  }
}
cout << "Your letter "<<ch<<" is in the string " <<count<<" times "<< " with string size of "<< strlen(buffer)<<endl;
system("pause");
return 0;
}