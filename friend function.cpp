/* friend fun */
#include<iostream>
#include<conio.h>
using namespace std;

/* This program created by Sujit Mandal */

class frnd{
	int m,n;
	public:
	void getdata()
	{
		cout<< "enter the data: \n";
		cin >> m >> n;
		}	
friend void sum(frnd);
};
void sum(frnd ob_1)
{
	cout<<"the sum is : "<< ob_1.m + ob_1.n;
}
int main()
{
	frnd obj;
	obj.getdata();
	sum(obj);
	getch();

}
