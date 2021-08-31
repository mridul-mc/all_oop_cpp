#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	private:
		int roll,id;
	public:
		void get();
		void show();
};
void student :: get()
{
	cout<<"Enter student roll:";
	cin>>roll;
	cout<<"Enter student id:";
	cin>>id;
}
void student :: show()
{
	cout<<"Student roll:"<<roll<<" ";
	cout<<"Student id:"<<id;
}
int main()
{
	student st1;
	st1.get();
	st1.show();
}


