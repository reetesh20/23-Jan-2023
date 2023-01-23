#include<iostream>
using namespace std;

main()
{
	int age=10;
	
	try
	{
		if(age>=18)
		throw"Eligible to Vote";
		
		else 
		throw"age";
	}
	catch(const char*ch)
	{
		cout<<"Not eligible"<<ch;
	}
	return 0;
}
