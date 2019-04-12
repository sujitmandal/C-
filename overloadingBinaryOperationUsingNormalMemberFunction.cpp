#include <iostream>
using namespace std;

/* This program created by Sujit Mandal */

class complex{
    float a,b;
    public:
        complex()
        {
            a = 0.0;
            b = 0.0;
        }
        complex(float m, float n)
        {
            a = m;
            b = n;
        }
void display()
{
    cout<< a << "+" << b << "i" <<endl;
}
complex operator + (complex);
};
complex complex::operator + (complex ob)
{
    complex obj;
    obj.a = a + ob.a;
    obj.b = b + ob.b;

    return obj; // return *this;
}

int main()
{
    complex ob1(2.3 , 5.2);
    complex ob2(3.2 , 5.5);

    complex ob3;

    ob1.display();
    ob2.display();

    ob3 = ob1 + ob2; // obj3 = obj [special "+" symbol

    ob3.display();
}
