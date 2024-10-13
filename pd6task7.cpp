#include <iostream>
#include <string>
using namespace std;
string calculate_time(int,int,int,int);
main()
{
   string answer;
   int examHours=0, examMinutes=0, studentHour=0, studentMinutes=0;
    cout << "Enter the Exam start time (in hours):";
    cin >> examHours;
    cout << "Enter the Exam start time (in minutes):";
    cin >> examMinutes;
    cout << "Enter the time arrival on center(in hours):";
    cin >> studentHour;
    cout << "Enter the time arrival on center(in minutes):";
    cin >> studentMinutes;
    answer=calculate_time( examHours, examMinutes, studentHour , studentMinutes);
    cout<<answer;
}
string calculate_time(int examHour, int examMinute, int studentHour, int studentMinutes)
{
    int examTotalMinutes = (examHour * 60 )+ examMinute;
    int studentTotalMinutes= (studentHour * 60)+  studentMinutes;
    int diff= studentTotalMinutes - examTotalMinutes;
    string result;
    if (diff > 0) 
    {
        result = "Late\n";
        if (diff >=60)
        {
            result =result+to_string(diff/60) + "hours and " + to_string(diff % 60) + " minutes after the start";
        }
        else
        {
            result =result+to_string(diff) + " minutes after the start ";
        }
    }
    else if (diff >= -30)
    {
        result = "On time \n";
        if (diff <0)
        {
            result =result+to_string(-diff) + "minutes before the start";
        }
    }
    else 
    {
        result = "Early\n";
        int studentMinutes = -diff;
        if (studentMinutes >=60)
        {
            result =result+to_string(studentMinutes/60) + ":" + to_string(studentMinutes%60)+ "hours before start" ;
            
        }
        else 
        {
            result =result+to_string(studentMinutes) + "minutes before the start";

        }
    }
	return result;
}