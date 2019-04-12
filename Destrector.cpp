#include<iostream>
#include<conio.h>
using namespace std;

/* This program created by Sujit Mandal */

class A{
	int x;
	
	public:
		A(int m)
		{
			x=m;
			cout <<"Parameter const.\n";
		}
		~A()
		{
			cout <<"Destrector const.\n";
		}
		void disp(){
                cout<<"hi";		}
};
int main()
{
	A ob_1(3);
	cout <<"start.";
	{
		A ob_2(7);
	}
	ob_1.disp();
	
	A ob_3(10);
	ob_3.disp();
	cout <<"end";
} 
