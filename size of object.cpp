#include<iostream>
using namespace std;

/* This program created by Sujit Mandal */

class a{
	int m;
	public:
		int n;
};
class b:a{
	int e;
	public:
		int p;
};
int main()
{
	b ob;
	cout <<sizeof(ob);
}
