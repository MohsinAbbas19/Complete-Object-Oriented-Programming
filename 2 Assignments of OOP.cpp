//Name: Mohsin Abbas.
//Sap id: 043632.
//subject: OOP
//Assginment NO: 02 
//Lab Assignment.
//Question NO 01.


#include <iostream>
using namespace std; 
class cricketer
{
private:
int c_day; 
int c_month; 
int c_year; 
int b_day; 
int b_month; 
int b_year; 
int year; 
int joing_day; 
int joing_month; 
int joing_year;
int to_day;
int today_month;
int today_year;
int expierence_year; 
int odi_rating;
int t20_rating;
 int test_rating;
public: 
cricketer()
{
//this is the deflaut constructor ...............
}
cricketer(int c_day, int c_month, int c_year, int b_day, int b_month, int b_year,int year,
int joing_day, int joing_month,int joing_year,int to_day,int today_month,
int today_year,int expierence_year int odi_rating,int t20_rating,int test_rating)
{
this->c_day=c_day; 
this->c_month=c_month; 
this->c_year=c_year; 
this->b_day=b_day; 
this->b_month=b_month; 
this->b_year=b_year; 
this->year=year;
this->joing_day=joing_day; 
this->joing_month=joing_month; 
this->joing_year=joing_year;
this->to_day=to_day;
this->today_month=today_month;
this->today_year=today_year;
this->expierence_year=expierence_year; 
this->odi_rating=odi_rating; 
 this->t20_rating=t20_rating; 
 this->test_rating=test_rating;
}
void calculate_age()
{
cout <<"current day is"<<endl;
cin>>c_day; 
cout <<"enter the current month "<<endl; 
cin>>c_month; 
cout <<"enter the current year "<<endl; 
cin>>c_year;
cout <<"enter the birth day "<<endl; 
cin>>b_day;
cout <<"enter the birth month "<<endl; 
cin>>b_month; 
cout <<"enter the birth year "<<endl; 
cin>>b_year;
 cout <<"current date "<<c_day<<"/"<<c_month<<"/"<<c_year<<endl; 
 cout <<"birth date "<<b_day<<"/"<<b_month<<"/"<<b_year<<endl; 
if (c_year>=b_year)
{
year=c_year-b_year;
 cout<<"the age of the cricketer is: "<<year<<endl; 
}
else 
{
cout<< "No information "<<endl; 
}
}
void calculate_experience()
{
cout <<"please enter the joining date "<<endl; 
cin>>joing_day;
cin>>joing_month;
cin>>joing_year;
cout <<"please enter the today date "<<endl; 
cin>>to_day;
 cin>>today_month;
cin>>today_year;
cout<<"joing date is: "<<joing_day<<"/"<<joing_month<<"/"<<joing_year<<endl; 
cout<<"today date is: "<<to_day<<"/"<<today_month<<"/"<<today_year<<endl; 
if(today_year>=joing_year)
{
expierence_year=today_year-joing_year; 
cout <<"Number of years experiences of the cricketer: "<<expierence_year<<endl;
 }
else 
{
cout <<"No Information"<<endl; 
}
}
void changetodiRating(int x){
odi_rating=x;
cout<<odi_rating;
}
void changet20Rating(int y){
t20_rating=y;
cout<<t20_rating;
}
void changetestRating(int z){
test_rating=z;
cout<<test_rating;
}
};
~cricketer{
};
class bowler:public cricketer
{
private: 
float average;
int number_of_wickets;
int number_of_match_played; 
int add_matches; 
int add_wickets;
 public: 
bowler()
{
// this is the defult constructor ..............
}
bowler(float average, int number_of_wickets, int number_of_match_played,int add_matches,int 
add_wickets)
{
this->average=average;
this->number_of_wickets=number_of_wickets; 
this->number_of_match_played=number_of_match_played; 
this->add_matches=add_matches;
this->add_wickets=add_wickets;
} 
void calcualte_bowler_ave(float average)
{
average=number_of_wickets/number_of_match_played;
cout <<"Average of taken wickets by bowler "<<average<<endl; 
}
void update_matches(int add_matches)
{
int number_of_match_played; 
cout <<"enter the add matches to the given matches "<<endl; 
cin>>add_matches;
add_matches=add_matches+number_of_match_played;
cout <<"Add given matches to existing matches is "<<add_matches<<endl; 
}
void update_wickets(int add_wickets)
{
int number_of_wickets;
cout<<"enter the add wickets to the given matches "<<endl; 
cin>>add_wickets; 
add_wickets=add_wickets+number_of_wickets; 
cout<<"Add given wickets to existing wickets "<<add_wickets<<endl; 
}
~bowler(){
};
 
};
class batsman:public cricketer
{
private:
int number_of_runs; 
int number_of_matches_played;
float average;
public: 
batsman()
{
//this is the default constructor............
}
batsman(float average,int number_of_runs,int number_of_matches_played)
{
this->average=average; 
this->number_of_runs=number_of_runs; 
this->number_of_matches_played=number_of_matches_played;
 
void calculate_bat_average(float average)
{
int number_of_runs; 
int number_of_matches_played;
average=number_of_runs/number_of_matches_played;
cout <<"the average of the batsman score is "<<average<<endl; 
}
~batsman(){
};
};
class allrounder:public batsman,bowler
{
public:
allrounder(){
}
~allrounder(){
};
int main()
{
//cricketer
cricketer c1(2); 
c1.calculate_age();
c1.calculate_experience();
c1.changeodiRating(5);
c1.changet20Rating(7);
c1.changetestRating(9)
//batsman........
int number_of_runs; 
int number_of_matches_played;
float average; 
int add_matches;
int total_matches;
cout <<"enter the number of the runs "<<endl; 
cin>>number_of_runs; 
cout <<"enter the number of the matches played "<<endl; 
cin>>number_of_matches_played; 
batsman bts; 
bts.calculate_bat_average(average);
bts.update_matches(total_matches);
// bowler ...............
int number_of_wickets;
int number_of_match_played;
float average;
int add_matches;
int add_wickets; 
 cout<<"Enter the number of the wickets "<<endl;
cin>>number_of_wickets;
cout<<"Enter the number of the match which played the bowler "<<endl;
cin>>number_of_match_played;
bowler bwl;
bwl.calcualte_bowler_ave(average);
bwl.update_matches(add_matches);
bwl.update_wickets(add_wickets);
// allrounder ...........
 allrounder;
return 0;
}