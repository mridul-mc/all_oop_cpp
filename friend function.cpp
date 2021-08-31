#include<iostream>
#include<conio.h>
using namespace std;
class ss
{
	 int a,b;
	 public:
	 	void input()
	 	{
	 		cout<<"Enter the value of A && B:"<<endl;
	 		cin>>a>>b;
		}
		friend void add(ss ob);
};
void add(ss ob)
{
	int c;
	c=ob.a+ob.b;
	cout<<"Sum:"<<c;
}
int main()
{
	ss kk;
	kk.input();
	add(kk);
}

