#include<iostream>
using namespace std;

main()
{
	int a=1;
	int b=0;
	cout<<"Programe Starts : ";
	
	try
	{
		if(b==0)
		throw"Divide by zero is not possible";
		cout<<a/b;
	}
	catch(const char*ch)
	{
		cout<<"Error occured "<<ch;
	}
	cout<<"Programe ends";
	return 0;
}
