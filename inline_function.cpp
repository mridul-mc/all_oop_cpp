#include<iostream>
#include<conio.h>
using namespace std;
int add(int x,int y);
inline int add(int x,int y)
{
	return(x+y);
}
int main()
{
	int a=10,b=20;
	cout<<add(a,b);
}
