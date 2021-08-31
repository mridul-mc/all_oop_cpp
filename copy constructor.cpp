#include<iostream>
#include<conio.h>
using namespace std;
class code
{
	int a,b;
	public:
		code(int x,int y)
		{
			a=x;
			b=y;
		}
		code(code &ref)
		{
			a=ref.a;
			b=ref.b;
		}
		void dis()
		{
			cout<<"Value of 'A':"<<a<<endl;
			cout<<"Value of 'B':"<<b<<endl;
		}
};
int main()
{
	int i,j;
	cout<<"Enter the value of 'I':";
	cin>>i;
	cout<<"Enter the value of 'J':";
	cin>>j;
	code obj(i,j);
	code obj2=obj;
	obj.dis();
	cout<<"Through copy constractor:-"<<endl;
	obj2.dis();
}
