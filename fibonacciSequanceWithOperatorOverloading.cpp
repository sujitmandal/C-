#include <iostream>
using namespace std;

/* This program created by Sujit Mandal */

class fibo{

    int a,b,c;
    public:
        fibo()
        {
            a = -1;
            b = 1;
        }
 int operator ++()
    {
        c = a + b;
        a = b;
        b = c;

        return(c);
    }
};
int main()
{
    fibo obj;
    int n;
    cout <<"Enter the limit:";
    cin >> n;

    for(int i = 0; i < n; i++)
        cout << ++obj;
}
