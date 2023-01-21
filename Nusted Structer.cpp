#include <iostream>
using namespace std; 
struct teacher{
	string name; 
	int id; 
	string address;
	 
//......................................................................................
	void set_information(void){
	cout<<"Enter teacher name "<<endl; 
	cin>>name;
	cout <<"Enter teacher id "<<endl; 
	cin>>id;
	cout <<"Enter teacher address "<<endl; 
	cin>>address;
	}
	void get_information(void)
	{
	cout<<"...................................................."<<endl; 
	cout<<"The name of the teacher is  "<<name<<endl; 
	cout<<"The id of the teacher is  "<<id<<endl; 
	cout<<"The address of the teacher is  "<<address<<endl; 	 

	}
    };
struct student{
	string name; 
	int age; 
	string department;
	void set_data(void)
	{
	cout <<"Enter student name "<<endl; 
	cin >>name;
	cout <<"Enter student age "<<endl; 
	cin >>age;
	cout <<"Enter student department "<<endl; 
	cin >>department;	
	 } 
	 void get_data(void){
	cout<<"...................................................."<<endl; 
	cout<<"The name of the student is  "<<name<<endl; 
	cout<<"The age of the student is  "<<age<<endl; 
	cout<<"The department of the student is  "<<department<<endl; 
	 }
		
};
int main()
{
teacher t1;
student s1;
//teacher information ................... 
t1.set_information();
t1.get_information();
//student information.............
s1.set_data();
s1.get_data();

	return 0;
}
