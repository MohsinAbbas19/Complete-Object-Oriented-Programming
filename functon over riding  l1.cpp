#include <iostream>
using namespace std;
class fruite{
	public: 
	int num_of_fruite;
	int price_of_fruite;
	
	fruite()
	{
		cout <<"default constructor "<<endl; 
	
	}
	fruite (int num_of_fruite,int price_of_fruite)
	{
		this->num_of_fruite=num_of_fruite;
		this->price_of_fruite=price_of_fruite;
	cout <<"this is the number of the fruite "<<price_of_fruite<<endl;
	cout <<"this is the price of the fruite "<<price_of_fruite<<endl;     
	}
	
	void fun1(int t)
	{
		cout <<"the number of the t is the "<<t<<endl; 
	}
};
class apple:public fruite{
	public:
		int num_of_apple;
		apple(){
			cout <<"this is the default constructor of the class apple "<<endl; 
		}
		apple(int num_of_apple)
		{
			this->num_of_apple=num_of_apple;
			cout <<"the number of the apple "<<num_of_apple<<endl; 
		}
    void fun1(int t)
	{
		t=t+1;
		cout <<"the number of the t is the "<<t<<endl; 
	}
	
};
int main ()
{
	fruite f1(5,12);
	f1.fun1(14); 
	apple a1(13);
	a1.fun1(71);
	return 0;
	
}
