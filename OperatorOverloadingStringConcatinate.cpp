#include <iostream>
#include <string.h>
#include<stdlib.h>

using namespace std;

/* This program created by Sujit Mandal */

class concatenate{
     char s1[20];
    public:
        concatenate()
        {
            //s1[]= "";
            //s2[] = '\0';
        }
        concatenate(char m[])
        {
            strcpy(s1,m);
        }
void display()
{
    cout << s1 <<endl;
}
concatenate operator + (concatenate);
};
concatenate concatenate::operator + (concatenate ob)
{
    concatenate obj;

    strcat(s1,ob.s1);
    strcpy(obj.s1,s1);

    return obj; /* return *this; */
}
int main()
{
    concatenate ob1("SUJIT");
    concatenate ob2(" MANDAL");

    concatenate ob3;system("cls");

    //ob1.display();
    //ob2.display();

    ob3 = ob1 + ob2; // obj3 = obj [special "+" symbol

    ob3.display();
}
