#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main ()

{

string filename1;
ifstream qFile1;
string qLine1;
const int linenumber = 2;  

cout<<"Please enter your file name (robotics.txt): "<<endl;

cin>>filename1;

qFile1.open(filename1.c_str());

if (!qFile1.good())

{

cout<<"Could not open file"<<endl;

return 1;

}

void printline(int linenumber);

{

 string qLine1;

for(int i=0;i<linenumber;i++)
{{

getline(qFile1, qLine1);


}


getline(qFile1,qLine1);

cout<< i <<" "<< qLine1 <<endl; 

}


qFile1.close();
  
system("pause");
return 0;

}
