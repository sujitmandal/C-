#include<iostream>
using namespace std;

/* This program created by Sujit Mandal */

class abc{
	void show()
	{
		cout<< "hi";
	}
	public:
		void dispaly()
		{
			show();
			cout << " " << "hello";
		}
};
main()
{
	abc ob;
	
	ob.dispaly();
}
