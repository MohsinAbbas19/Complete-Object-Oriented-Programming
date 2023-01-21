#include <iostream>
using namespace std; 
class fruite{
	public:
		void calculate_price(int num_of_mango,int price_of_mango){
cout<<"enter the number of mango "<<endl; 
cin>>num_of_mango;
cout<<"enter the price  of mango "<<endl; 
cin>>price_of_mango;
price_of_mango=price_of_mango+num_of_mango;
cout <<"the price of mangoes is "<<price_of_mango<<endl;
}

};
class apple:public fruite{
	public:
		void calculate_price(int num_of_apple,int price_of_apple){
cout<<"enter the number of apple "<<endl; 
cin>>num_of_apple;
cout<<"enter the price  of apple "<<endl; 
cin>>price_of_apple;
price_of_apple=price_of_apple+num_of_apple;
cout <<"the price of apples is "<<price_of_apple<<endl;
}	
};
int main()
{
	fruite f1; 
	apple a1;
	a1.calculate_price(4,5);
	f1.calculate_price(7,6);
	return 0;
}
