#include <iostream>
using namespace std; 
class test{
	private: 
	int num; 
	public: 
	test()
	{
		//default constructor .....
		this->num=num; 
		
		num=1; 
		cout <<num<<endl; 
	}
	void operator++()
	{
		++num;
	cout <<num<<endl; 	
	}
	void operator++(int)
	{
		num++;
		cout <<num<<endl; 
	}
	void operator --()
	{
		--num;
		cout<<num<<endl; 
	}
	void operator--(int)
	{
		num--;
		cout <<num<<endl; 
	}
	
};
int main()
{
	test t1; 
	++t1;
	t1++;
	--t1; 
	t1--;
	
	return 0;
}
