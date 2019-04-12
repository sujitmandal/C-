#include<iostream>
using namespace std;

/* This program created by Sujit Mandal */

class A{
	int a;
};
class B:public A{
	
};
int main()
{
	cout <<sizeof(B);
}
