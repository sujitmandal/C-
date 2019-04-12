#include<iostream>
using namespace std;

/* This program created by Sujit Mandal */

class abc
{
	float a,b;
	
	public:
		void getdata()
		{
			cout <<"Enter the 1st valu:\n";
			cin >> a ;
			cout <<"Enter the 2st valu:\n";
			cin >> b ;
		}
		void add()
		{
			cout << "\nThe sum is:" << a+b ;
		}
		void sub()
		{
			cout<< "\nThe sub is:" << a-b;
		}
		void mult()
		{
			cout << "\nThe multiplication is:" <<a*b;
    	}
		void divd()
		{
			cout <<"\nThe divition is:" << a/b;
		} 
};
int main()
{
	abc obj_1, obj_2, obj_3, obj_4;
	obj_1.getdata();

	obj_1.add();
	obj_1.sub();
	obj_1.mult();
	obj_1.divd();
	return (0);
}
