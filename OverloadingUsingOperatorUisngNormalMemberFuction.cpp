#include <iostream>
using namespace std;

/* This program created by Sujit Mandal */

class A{
    int a;
    public:
        A(){a=0;}
        A(int m){a=m;}
        void operator++()
        {
            cout<<++a;
        }
};
int main()
{

    A ob1;
    A ob2(5);

    ++ob1;
    ++ob2;
}
