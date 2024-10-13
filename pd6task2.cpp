#include<iostream>
using namespace std;
float calculateAverage(float,float,float,float,float);
string calculateGrade(float);
main()
{
    float engmarks,mathmarks,chemmarks,ssmarks,biomarks,average;
    string name,grade;
    cout<<"Enter student name:";
    cin>> name;
    cout<<"Enter the marks of English:";
    cin>> engmarks;
    cout<<"Enter the marks of Mathematics:";
    cin>> mathmarks;
    cout<<"Enter the marks of Chemistry:";
    cin>>chemmarks;
    cout<<"Enter the marks of Social Science:";
    cin>>ssmarks;
    cout<<"Enter the marks of biology:";
    cin>>biomarks;
    cout<<"Student name:"<<name<<endl;
    average=calculateAverage(engmarks,mathmarks,chemmarks,ssmarks,biomarks);
    cout<<"The percentage is:"<<average<<endl;
    grade=calculateGrade(average);
    cout<<"The grade is:"<<grade<<endl;
}
float calculateAverage(float engmarks,float mathmarks,float chemmarks,float ssmarks,float biomarks)
{
    float total,average;
    total=engmarks+mathmarks+chemmarks+ssmarks+biomarks;
    average=(total/500)*100;
    return average;
}
string calculateGrade(float average)
{
    string grade;
    if(average>=90 && average<=100)
    {
        return "A+";
    }
    else if(average>=80 && average<90)
    {
        return "A";
    }
    else if(average>=70 && average<80)
    {
        return "B+";
    }
    else if(average>=60 && average<70)
    {
        return "B";
    }
    else if(average>=50 && average<60)
    {
        return "C";
    }
    else if(average>=40 && average<50)
    {
        return "D";
    }
    else
    {
        return "F";
    }
} 