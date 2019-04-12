#include <iostream>

/* This program created by Sujit Mandal */

using namespace std;

int main()
{
	
   int n,m,i,j,a[10][10],max=0,min=a[10][10];
    cout << "Enter the number of collumns: ";
    cin >> m ;
    cout << "Enter the number of rows: ";
    cin >> n ;
    
    	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
		cin >> a[i][j] ;
	}
}

     cout << "\nThe matris is:\n";
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			cout << a[i][j] ;
			cout << "\t";
		}
			cout << "\n\n";
	}
	
		for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
		if(a[i][j]>max)
		max=a[i][j];
	}
}
	cout <<"\nThe max is : " << max;
	
	
		for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
		if(a[i][j]<min)
		min=a[i][j];
	}
}
	cout <<"\n\nThe min is : " << min;
    
}


