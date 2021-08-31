#include<iostream>
#include<conio.h>
using namespace std;
class fun_ovl
{
	public:
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
};
int main()
{
	fun_ovl ob;
	ob.f1(4);
	ob.f1(5.2);
}
