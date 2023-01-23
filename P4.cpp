#include<iostream>
using namespace std;

main()
{
	int marks=-2;
	
	try
	{
		if(marks>0)
		{
			cout<<" ";
		}
		
		else
		throw(marks);
	}
	catch(...)
	{
		cout<<" Exception Caught as "<<marks;
	}
	return 0;
}
