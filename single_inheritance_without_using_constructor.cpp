#include<conio.h>
#include<iostream>
using namespace std;
class A
{
	public:
		int i,j;
		void take()
		{
			cin>>i>>j;
		}
};
class B: public A
{
	
	public:
		int k;
		void get()
		{
			cin>>k;
		}
	public:
		void show()
		{
			cout<<i<<" "<<j<<" "<<k;
		}
	public:
		void shon()
		{
			cout<<"Hello";
		}
};
int main()
{
	B b;
	b.take();
	b.get();
	b.show();
}
