#include <iostream>
using namespace std;
class complex
{
	private:
int a; 
int b;
public: 
friend complex sumcompolex(complex o1,complex o2);
 
 
void set_number(int x,int y)
{
	a=x;
	b=y;

}
void print_number(void)
{
	cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl; 
}
};
complex sumcompolex(complex o1,complex o2)
{
	complex o3; 
	o3.set_number((o1.a+o2.a),(o1.b+o2.b));
	return o3; 
}
int main()
{
	
	complex c1,c2,sum; 
	c1.set_number(4,5);
	c1.print_number();
	c2.set_number(6,8);
	c2.print_number();
	sum = sumcompolex(c1, c2);
	sum.print_number();
	return 0;
}
