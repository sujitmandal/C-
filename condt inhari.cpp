#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout <<"A's const.";
		}
};
class B:public A{
	public:
		B()
		{
			cout<<"\n"<<"B's const.";
		}
};

class C:public B
{
	public:
		C()
		{
			cout<<"\n" <<"C's const.";
		}
};
int main()
{
	C ob;
}
