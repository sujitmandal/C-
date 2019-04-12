#include <iostream>
inline int sqr1(int);
inline float sqr2(float);
using namespace std;

/* This program created by Sujit Mandal */

int main()
{
	int	a = 5;
	float b  = 2.5;
	cout << "a: " << sqr1(a) << endl;
	cout << "b: " << sqr2(b) ;
	}
int sqr1(int m)
{
	return(m*m);
}
float sqr2(float n)
{
	return (n*n);
}
