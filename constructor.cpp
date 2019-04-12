 #include<iostream>
 using namespace std;
 
 /* This program created by Sujit Mandal */
 
 class A{
 	int a;
 	public:
 		A()
 		{
		 }
		 A(int m)
		 {
		 	a=m;
		 	cout <<"A's const.";
		 	cout <<"\n"<<a;
		 }
 };
 class B{
 	int b;
 	public:
 		B()
 		{
		 }
		 B(int n)
		 {
		 	b=n;
		 	cout <<"\n"<<"B's const.";
		 	cout <<"\n"<<b;
		 }
 };
 class C:public A, public B{
	int c,d;
	public:
		C()
		{
		}
		C(int p,int q,int r, int s):A(r),B(s)
		{
			c=p;
			d=q;
			cout<<"\n"<<"C's const.";
			cout <<"\n"<<c<<"\n"<<d;
		}
 };
 int main()
 {
 	C ob(2,3,4,5);
 }
