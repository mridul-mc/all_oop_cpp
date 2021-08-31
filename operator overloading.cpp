#include<iostream>
#include<conio.h>
using namespace std;
class opr_ovr
{
	int a,b;
	public:
		opr_ovr(int x,int y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<"A:"<<a<<" "<<"B:"<<b;
		}
		void operator -()
		{
			a=-a;
			b=-b;
		}
};
int main()
{
	opr_ovr obj(-10,25);
	obj.show();
	-obj;
	cout<<endl;
	obj.show();
}

