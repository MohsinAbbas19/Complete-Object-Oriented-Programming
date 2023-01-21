#include <iostream>
using namespace std;
class test
{
private:
int num; 
public: 
test()
{
	num=num; 
	num=6;
	cout<<"value: "<<num<<endl;
	
}

test operator+(test t2)
{
	test t3;
	t3.num=num+t2.num;
	return t3; 
	
}
	void display()
	{
		cout << " "<<num<<endl; 
	}
};
int main()
{
	test t1; 
	test t2; 
	test sum;
	sum=t1+t2; 
	sum.display();
	return 0;
}
