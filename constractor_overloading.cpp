#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int a,b;
	double c;
	public:
		A()
		{
			cout<<"Enter two number:"<<endl;
			cin>>a>>b;
			cout<<a<<" "<<b<<endl;
		}
		A(int x,int y)
		{
			a=x;
			b=y;
			cout<<a<<" "<<b<<endl;
		}
		A(int x,double y)
		{
			a=x;
			c=y;
			cout<<a<<" "<<c<<endl;
		}
};
int main()
{
	A obj;
	A obj2(125,258);
	A obj3(254,12.25);
}
