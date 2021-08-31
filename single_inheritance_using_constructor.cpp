#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
		int i,j;
		A()
		{
			i=3,j=5;
		}
};
class B: public A
{
	public:
		int k;
			void get()
			{
				k=9;
				cout<<i<<endl<<j<<endl<<k<<endl;
			}
};
int main()
{
	A a;
	B b;
	b.get();
}
