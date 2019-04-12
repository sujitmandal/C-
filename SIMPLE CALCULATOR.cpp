#include<iostream>
#include<math.h>

/* This program created by Sujit Mandal */

using namespace std;

int main()
{
	float a, b, sum=0, sub=0, mult=0, divi=0, exp=0;
	int operation;
	
	do{
	cout << "SIMPLE CALCULATOR\n";
	cout << "\nSELECT ANAY OPERATION BY ENTERING THE COROSPONDIN NUMBER\n";
	cout << "1: ADDITION\n";
	cout << "2: SUBSTRACTION\n";
	cout << "3: MULTIPLICATION\n";
	cout << "4: DIVITION\n";
	cout << "5: EXPONENT/POWER\n";
	cout << "6: EXIT\n";

	cout << "\nENTER THE OPERATION : " ;
	cin >> operation ;
 
	if(operation == 1)
		cout <<"\nYOU HAVE SELECT ADDITION." ;
		else if(operation == 2)
			cout <<"\nYOU HAVE SELECT SUBSTRACTION." ;
				else if(operation == 3)
					cout <<"\nYOU HAVE SELECT MULTIPLICATION." ;
						else if(operation == 4)
							cout <<"\nYOU HAVE SELECT DIVITION." ;
								else if(operation == 5)
								cout <<"\nYOU HAVE SELECT EXPONENT/POWER." ;
								
	if(operation < 5)
    {
	
	cout << "\n\nENTER THE FIRST VELUE : " ;
	cin >> a ;
	
	cout << "ENTER THE SECOND VELUE : " ;
	cin >> b ;

    }
    if(operation == 5)
    {
    	cout << "\n\nENTER THE BASE VALUE : ";
    	cin >> a;
    	
    	cout << "ENTER THE EXPONENT : ";
    	cin >> b;
	}
    
		 
		switch(operation) 
		{
			case 1: 
		        sum = (a+b);
				cout << "\nTHE SUM OF : " << a << "+" << b << " = " << sum ;
				break;
		
			case 2:
		        sub = (a-b);	
				cout << "\nTHE SUBSTRACTION OF : " << a << "-" << b << " = " << sub ;
				break;	
		
			case 3: 
				mult = (a*b);
				cout << "\nTHE MULTIPLICATION OF : " << a << "*" << b << " = " << mult ;
				break;
						
			case 4: 
				divi = (a/b);
				cout << "\nTHE DIVITION OF : " << a << "/" << b << "=" << divi ;
				break;	
				
			case 5:
				exp = (pow(a,b));
				cout << "\nTHE VALUE OF " << a << "^" << b << " = " << exp ;
				break;
					
			case 6: 
			    exit(0);
				break;
				
			default :
				cout << "\nINVALID INPUT."  ;	
				break;
			}
			cout << "\n\n------------------------------------\n\n" ;
		}while(operation != 6 );
	return 0;
}
