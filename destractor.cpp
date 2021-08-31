#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int a,b;
	public:
		A()
		{
			cout<<"Enter a number in A:"<<endl;
			cin>>a;
			cout<<"Enter a number in B:"<<endl;
			cin>>b;
		}
		/*void show()
		{
			cout<<"Value of A:"<<a<<endl<<"Value of B:"<<b;
		}*/
		~A()
		{
			cout<<"Destroy successed";
		}
};
int main()
{
	A obj;
//	obj.show();
}
