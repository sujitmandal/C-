#include<iostream>
using namespace std;

/* This program created by Sujit Mandal */

class fibonacci{
	int a,b,c,n;
	public:
		void int_1()
		{
			a=-1, b=1;
			cout<<"Enter the no of data: ";
			cin>>n;
		}
		void fibn();
};
void fibonacci::fibn()
{
	int i;
	for(i=0; i<n; i++)
	{
		c=a+b;
		cout << " "<<c;
		a=b;
		b=c;
	}
}
int main()
{
	fibonacci f;
	f.int_1();
	f.fibn();
}
