#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
	sample()
	{
		cout<<"___Default Constructor___";
	}
	sample(int a, int b)
	{
		cout<<"___Default Constructor___";
		(*this).a=a;
		(*this).b=b;
	}
	void print()
	{
		cout<<"\na = "<<a;
		cout<<"\nb = "<<b;
	}
};
int main()
{ 
	cout<<"This is a trial program.";
	sample s1(10,20);
	s1.print();
	return 0;
}
