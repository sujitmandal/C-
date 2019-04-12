/* static fuc */

#include<iostream>
using namespace std;

class sta
{
	int a;
	static int b;
	public:
		void show()
		{
			a=100;
			cout<<"a : " <<++a <<"\n";
		}
static void display();
};

int sta::b=100;
void sta::display()
{
	cout <<"b : "<< ++b <<"\n";
}
int main()
{
	sta ob_1, ob_2, ob_3;
	
	ob_1.show();
	ob_2.show();
	ob_3.show();
	
	sta::display();
	sta::display();
	sta::display();
}
