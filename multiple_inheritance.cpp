#include<conio.h>
#include<iostream>
using namespace std;
class A
{
	public:
		int i,j;
		void get()
		{
			i=5,j=6;
		}
};
class B: public A
{
	public:
		int k;
		void take()
		{
			k=9;
		}
		void show()
		{
			cout<<i<<" "<<j<<" "<<k<<endl;
		}
};
class C: public B
{
	private:
		int c;
	public:
		void rec()
		{
			cout<<"Enter a number:";
			cin>>c;
		}
		void dis()
		{
			cout<<i<<" "<<j<<" "<<k<<" "<<c;
		}
};
int main()
{
	C cobj;
	cobj.get();
	cobj.take();
	cobj.show();
	cobj.rec();
	cobj.dis();
}
