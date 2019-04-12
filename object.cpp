#include<iostream>
using namespace std;

/* This program created by Sujit Mandal */

class P
{
	public:
		int a;
};
class Q
{
	public:
		int a1;
		P ob;
		Q() 
		{
		
		ob.a=10;
		a1=100;}
};
int main()
{
	Q obj;
	cout<<obj.a1;
	cout<<"\n" <<obj.ob.a;
}
