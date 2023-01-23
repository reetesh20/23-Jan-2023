#include<iostream>
using namespace std;

main()
{
	int age=2;
	
	try
	{
		if(age>=18)
		{
			cout<<"Eligible to Vote";
		}
		
		else 
		throw(age);
	}
	catch(...)
	{
		cout<<"You are not eligible \n";
		cout<<"Because your age is : "<<age;
	}
	return 0;
}
