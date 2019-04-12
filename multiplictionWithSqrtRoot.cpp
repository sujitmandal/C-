#include <iostream>
#include <math.h>
using namespace std;

/* This program created by Sujit Mandal */

class complex{
    float a,b;
    public:
        complex()
        {
            a = 0;
            b = 0;
        }
        complex(float m, float n)
        {
            a = m;
            b = n;
        }
void display()
{
    cout<< a << "+" << b  << "i" <<endl;
}
complex operator * (complex);
};
complex complex::operator * (complex ob)
{
    complex obj;
    obj.a = (a * ob.a - b * ob.b);
    obj.b = (a * ob.b + b * ob.a);

    return obj;
}

int main()
{
    complex ob1(sqrt(2) , sqrt(3));
    complex ob2(sqrt(4) , sqrt(2));

    complex ob3;

    ob1.display();
    ob2.display();

    ob3 = ob1 * ob2;

    ob3.display();
}
