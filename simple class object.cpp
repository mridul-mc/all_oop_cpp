#include<conio.h>
#include<iostream>
using namespace std;
class bird
{
	private:
		int wt,len;
	public:
		void take()
		{
			cout<<"Enter weight:"<<endl;
			cin>>wt;
			cout<<"Enter length:"<<endl;
			cin>>len;
		}
		void dis()
		{
			cout<<"Weight is:"<<len;
			cout<<"Height is:"<<len<<endl;
		}
		
};
int main()
{
	bird b1,b2;
	b1.take();
	b1.dis();
	b2.take();
	b2.dis();
}
