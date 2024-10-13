#include<iostream>
using namespace std;
int calculateVolleyballGames(string,int,int);
main()
{
    string year;
    int holidays,travelWeekends,result;
    cout<<"Enter year type:";
    cin>> year;
    cout<<"Enter the number of holidays:";
    cin>> holidays;
    cout<<"Enter the number of weekends:";
    cin>> travelWeekends;
    result=calculateVolleyballGames(year,holidays,travelWeekends);
    cout<<result;
}
int calculateVolleyballGames(string year,int holidays,int travelWeekends)
{
 int yweekends=48;
 int pweekends,sweekends,hplay,splay,tplay;
 if (year=="normal")
 {
 sweekends=yweekends-travelWeekends; //weekends in sofia
 hplay=holidays*0.6667;
 splay=sweekends*0.75;
 tplay=hplay+splay+travelWeekends;
 }
 else if(year=="leap")
 {
    pweekends=yweekends*0.15;
    yweekends=yweekends+pweekends;
    sweekends=yweekends-travelWeekends; //weekends in sofia
    hplay=holidays*0.6667;
    splay=sweekends*0.75;
    tplay=hplay+splay+travelWeekends;
 }
}





