#include<iostream>
#include<conio.h>
using namespace std;
void f1(int x)
{
	int d1=x*x;
	cout<<d1<<endl;
}
void f1(double y)
{
	double d2=y*y;
	cout<<d2;
}
int main()
{
	int i;
	cout<<"Enter integer number:";
	cin>>i;
	
	double j;
	cout<<"Enter float number:";
	cin>>j;
	
	cout<<endl;
	f1(i);
	f1(j);
}
