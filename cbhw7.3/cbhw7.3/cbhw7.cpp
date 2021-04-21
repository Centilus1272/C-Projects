#include<iostream>
#include<cmath>

using namespace std;
int main()

{
	double SA,t1,Q,t2,AIRCONV,L,W,Pi, M2,M1;
	int AREA;
	cout<<" Enter the surrounding temp for t2";
	cin>>t2;
	cout<<"Enter the enter the surface temp for t1";
	cin>>t1;
    cout<<" Enter 1 for rectangular of 2 for elliptical area or 3 for other ";
	cin>>AREA;

	if(AREA==1)
	{
	cout<<"L";
	cin>>L;
	cout<<"W";
	cin>>W;
    SA=L*W;      
	AIRCONV=8.7;
	Q=AIRCONV*SA*(t1-t2);
	cout<<(Q);  
	}
	else if(AREA==2)
	{
	Pi = 4 * atan(1.0);
	cout<<"M1";
	cin>>M1;
	cout<<"M2";
	cin>>M2;
	SA=Pi*M1*M2;
	AIRCONV=8.7;
	Q=AIRCONV*SA*(t1-t2);
	cout<<(Q);
    }
	else if(AREA==3)
    
	{
	cout<<" Enter area";
	cin>>SA;
    AIRCONV=8.7;
	Q=AIRCONV*SA*(t1-t2);
	cout<<(Q);
	}
	
	else
	cout<<"Error";
	
	
	system("pause");

	return 0;
}