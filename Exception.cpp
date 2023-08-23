#include<iostream>
#include<string.h>
using namespace std;

main()
{
	int a,b,c;
	cout<<"Enter value A = ";
	cin>>a;
	cout<<"Enter Value B = ";
	cin>>b;
	char s[] = "Can not Divison by Zero";
	try
	{
		if(b!=0)
		{
	  		c = a/b;
			cout<<"Ans = "<<c<<endl;
		}
		else
		{
			throw b;
		}
    }
		catch(int n)
		{
			cout<<"Can not Divison by Zero"<<endl;
		}
		catch(char ch[])
		{
			cout<<s<<endl;
		}
		
		
	}
	

