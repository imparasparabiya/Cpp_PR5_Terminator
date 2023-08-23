#include<iostream>
#include<string.h>
using namespace std;

main()
{
	int a,b,c;
	cout<<"Enter Value A = ";
	cin>>a;
	cout<<"Enter Value B = ";
	cin>>b;
	
	 try
	 {
	 	if(b!=0)
	 	{
	 		c = a/b;
	  		cout<<"Ans = "<<c<<endl;
		}
		else
		{
			throw 'l';
		}
	 }
	 catch(...)
	 {
	 	cout<<"Can not Divison by Zero"<<endl;
	 }
}
