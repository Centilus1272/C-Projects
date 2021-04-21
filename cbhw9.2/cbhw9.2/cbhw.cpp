#include<iostream>
#include<cmath>
using namespace std;


int main()

{
  double Re, V , v, d,x ;

  for (x=1;x<4;x++)
  { 
  v=.09;
  d=0.1;
  cout<<" Enter the kinmatic viscosity\n";
  cin>>V;
  Re=V*d/v; 
  cout << Re;

  if(Re>=3000)
  cout<<" The change is turblent\n";
  else if(Re<=2000)
  cout<<"The change is laminar\n";
  else
  cout<<" The change is in transtion from laminar to turblent\n";
  }

  system("pause");
  return 0;


}





