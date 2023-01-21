#include <iostream>
using namespace std; 
class test 
{
	private:
		
int a; 
double b; 
	public:
		test()
		{
			int a;
			double b;
			this->a=a;
			this->b=b;
			
	int x; 
	cout <<"enter the value of a and b "<<endl; 
	cin>>a>>b;

	try
	{
	if (x<=0)
	{
		cout <<"the value of x is not in -"<<endl; 
	}
	else 
	{
		throw(x);
	}
		
	}
	catch (int i)
	{
		cout <<"statment is divisible by zero"<<endl;
	}	
	
	
	//2.............
	
	try
	{
	if (b=!0)
	{
		cout <<"the value2 is  not zero"<<endl; 
	}
	else 
	{
		throw(x);
	}
		
	}
	catch (int i)
	{
		cout <<"statment is divisible ny zero";
	}	
	
	
	// 3....................
	try
	{
	if (x<20)
	{
		cout <<"the sum of two values is "<<a+b<<endl; 
	}
	else 
	{
		throw(x);
	}
		
	}
	catch (int i)
	{
		cout <<"statment is not correct because the value of x is grether than 20"<<endl;
	}	
	
	//4................
	
	try
	{
	if (x<20)
	{
cout <<"the product  of two values is "<<a*b<<endl; 
	}
	else 
	{
		throw(x);
	}
		
	}
	catch (int i)
	{
		cout <<"statment is not correct because the value of x is grether than 20"<<endl;
	}	

	
	
		}
};

int main ()
{
	test();
	
	return 0;
}
