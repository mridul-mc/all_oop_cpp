#include<iostream>
#include<conio.h>
using namespace std;
class test
{
	int a,b;
	public:
		test(int x,int y)
		{
			a=x;
			b=y;
		}
		void dis()
		{
			cout<<"Value of A:"<<a<<endl;
			cout<<"Value of B:"<<b;
		}
};
int main()
{
	int i,j;
	cout<<"Enter value in A:";
	cin>>i;
	cout<<"Enter value in B:";
	cin>>j;
	
	test t(i,j);
	
	t.dis();
}
