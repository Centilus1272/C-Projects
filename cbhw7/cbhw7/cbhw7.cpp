#include<iostream>
#include<cmath>
using namespace std;
int main()

{
	double v,t,ssd,c,f,G,g;
	char Unit;
	cout<<" Enter the speed for v";
	cin>>v;
	cout<<"Enter the time for t";
	cin>>t;
	cout<<" Enter the road grade for G";
	cin>>G;
	cout<<" Enter the friction for f";
	cin>>f;
	cout<<" Enter gravity for g";
	cin>>g;
	cout<<" Enter M for metric units or E for english ";
	cin>>Unit ;
	if(Unit=='M')

	c=.278;
	ssd=c*(v*t+c*pow(v,2)/2*(f+G));
	cout<<('ssd');  
  
	if(Unit=='E')
	c=1.47;
	ssd=c*(v*t+c*pow(v,2)/2*(f+G));
	cout<<('ssd');
	system("pause");

	return 0;
}