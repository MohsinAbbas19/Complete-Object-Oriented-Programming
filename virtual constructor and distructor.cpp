#include <iostream>
using namespace std; 
class person1{
	public: 
	person1(){
		cout <<"this is the constructer of the parent class "<<endl;
	}
	virtual ~person1(){
		cout <<"this is the distructer of the parent class "<<endl;
	}
	
};
class person2:public person1{
public: 
	person2(){
		cout <<"this is the contructor of the child class "<<endl; 
	}
	virtual ~person2(){
		cout <<"this is the distructor of the child class "<<endl; 
	}
};
int main ()
{
	person1* p1=new person2;
	delete p1; 
	return 0;
}
