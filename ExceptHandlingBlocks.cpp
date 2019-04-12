#include <iostream>
using namespace std;

/* This program created by Sujit Mandal */

class except{
    int a;
    public:
        void get()
        {
            cout <<"Enter any of [0,5,10]:";
            cin >> a;
        }
    void hamdle();
};
void except::hamdle()
{
    int x;
    float y;
    char z;

   try
   {
       if(a == 0) throw x;
       if(a == 5) throw y;
       if(a == 10) throw z;
   }
   catch(int p)
   {
       cout <<"\nint type except caught.\n";
   }
   catch(float q)
   {
       cout <<"\nfloat type except caught.\n";
   }
   catch(char r)
   {
       cout <<"\nchar type except caught.\n";
   }
}
int main()
{
    except ob;

    ob.get();
    ob.hamdle();
}
