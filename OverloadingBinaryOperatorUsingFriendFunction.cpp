#include <iostream>
using namespace std;

/* This program created by Sujit Mandal */

class comfriend{
    float a , b;
    public:
        comfriend(){}
        comfriend(float m, float n)
            {
                a = m;
                b = n;
            }
void display()
{
    cout<< a << "+" << b << "i" <<endl;
}
friend comfriend operator + (comfriend , comfriend);
};
comfriend operator + (comfriend ob1, comfriend ob2)
{
    comfriend obj;
    obj.a = ob1.a + ob2.a;
    obj.b = ob1.b + ob2.b;

    return obj;
}
int main()
{
    comfriend obj1(2.1 , 3.1);
    comfriend obj2(3.1 , 4.1);

    comfriend obj3;

    obj1.display();
    obj2.display();

    obj3 = obj1 + obj2;

    obj3.display();
}
