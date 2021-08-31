#include<iostream>
#include<conio.h>
using namespace std;
class test
{
	int a,b;
	public:
		test()
		{
			cout<<"Enter number in A:";
			cin>>a;
			cout<<"Enter number in B:";
			cin>>b;
		}
		void show()
		{
			cout<<a<<" "<<b;
		}
};
int main()
{
	test g;
	g.show();
}
