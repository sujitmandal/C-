#include <iostream>
using namespace std;

/* This program created by Sujit Mandal */

class Equality{
    int a;
    float b;
    char c;
    public:
        Equality(){}
        Equality(int m, float n, char o)
        {
            a = m;
            b = n;
            c = o;
        }
    friend void operator == (Equality , Equality);
};
void operator == (Equality e1, Equality e2)
{

    if(e1.a == e2.a && e1.b == e2.b && e1.c == e2.c)
        cout <<"Two object are same";
    else
        cout<<"Not same";
}
int main()
{

    Equality ob1(5, 2.5, 'x');
    Equality ob2(7, 5.5, 'y');

    ob1 == ob2;
    //return 0;
}
