#include<conio.h>
#include<iostream>
using namespace std;
enum day{Sun,mon,tue,wed,thus,fri,sat};
int main()
{
	day d1,d2;
	d1=fri;
	d2=tue;
	int n=d2*d1;
	cout<<n;
}
