#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void PrintLine(fstream&, int);

int main()

{
	int line = 0;
	fstream infile;

	infile.open( "randomword.txt", ios::in);

	cout << "Enter line number";
	cin >> line;

	PrintLine(infile, line);

	return 0;

}

void PrintLine(fstream& infile, int linenum)
{
	int count = 0;
	string line;

	while(infile)
	{
		getline(infile, line);
		count++;
		
		if(count == linenum)
		{
			cout << line << endl;
		}}

	infile.close();

	system("pause");
	return;
}
