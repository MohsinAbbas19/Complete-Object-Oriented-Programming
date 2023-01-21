#include <iostream>
using namespace std; 
class complex{
	int a=12;
	public:
	complex(){
	}
	complex(complex &cpy)
	{
		a=cpy.a;
		cout <<a<<endl;
	}
	void print_data(void)
	{
		cout <<"the vlaue of the a is the "<<a<<endl; 
	}
};
int main(){
	complex c1;
	c1.print_data();
	return 0;

}
