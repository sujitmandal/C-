#include <iostream>
using namespace std;

/* This program created by Sujit Mandal */

class A{
	public:
		void show() // this show() overrides the show() of class A
		{
			cout<<"inside A \n";
		}
};

class B:public A{
	public:
		void show()
		{
			cout<<"inside B \n";
		}
};

int main()
{
	B obj;

	obj.show(); // inside B
	obj.show(); // inside A

	obj.A::show(); // inside A

	return 0;
}
