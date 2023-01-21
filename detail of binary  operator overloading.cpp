#include <iostream>
using namespace std; 
class test{
	private: 
	int num;
	public: 
	test(int num)
	{
		
		this->num=num; 
		cout <<num<<endl;
		
	}
	
	test operator+(test t2)
	{
		test t3(0); 
		t3.num=num+t2.num;
		return t3;
		
		
	}
	test operator-(test t2)
	{
		test t4(0);
		t4.num=num-t2.num;
		return t4;
	}
	void display()
	{
		cout <<"Value: "<<num; 
	}

};
	int main ()
	{
		test t1(55);
test t2(10);

test sum(0);
test sub(0);

sum=t1+t2;
sum.display();		

sub=t1-t2;
sub.display();		
		 
		return 0;
	}
