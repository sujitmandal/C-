#include<iostream>
using namespace std;

/* This program created by Sujit Mandal */

class A{
	int a,b;
	public:
		A()
		{
			a=0;
			b=0;
			cout <<"Default constructor called";
		}
		A(int m, int n)
		{
			a=m;
			b=n;
			cout << "\nParameterized constructor called\n";
		}
		A(A &ob)
		{
			a=ob.a;
			b=ob.b;
			cout <<"Copy constructor called\n";
		}
		void display()
		{
			//cout << a <<b;
		}
};
int main()
{
	A ob_1;
	A ob_2(5,2);
	A ob_3(ob_2);
	
	ob_1.display();
	ob_2.display();
	ob_3.display();
}

