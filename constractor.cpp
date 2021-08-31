#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
	int a,b;
	public:
		sum(int a,int b)
		{
			(*this).a=a;
			(*this).b=b;
		}
		sample(sample &old)
		{
			a=old.a;
			b=old.b;
		}
		void print()
		{
			cout<<"A:"<<a<<endl;
			cout<<"B:"<<b;
		}
};

int main()
{
	sum s(253,458);
	sum s1(s);
	s.print();
	s1.print();
}
