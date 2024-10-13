#include<iostream>
using namespace std;
float amountDue(char,char,int); 
main()
{
    char service,t;
    int min;
    float result;
    cout<<"Enter the service code(R/r for regular,P/p for premium):";
    cin>>service;
    cout<<"Enter the number of minutes:";
    cin>>min;
    result=amountDue(service,t,min);
    cout<<"Amount due:$"<<result;
}
float amountDue(char service,char t,int min)
{
    float charges=0.0;
    if(service=='R'|| service=='r')
    {
        cout<<"Service type: Reguler"<<endl;
        cout<<"Total minutes used:"<<min<<" minutes"<<endl;
        if(min>50)
        {
            charges=0.20*(min-50);
        }
        else
        {
            charges=0.0;
        }
    }
    else if(service=='P' ||service=='p')
    {
        cout<<"Enter time of call(D/d for day,N/n for night):";
        cin>>t;
        cout<<"Service type: Premium"<<endl;
        cout<<"Total minutes used:"<<min<<" minutes"<<endl;
        if(t=='D' || t=='d' && min>75)
        {
            charges=0.10*min;
        }
        else if(t=='N' || t=='n' && min>100)
        {
            charges=0.05*min;
        }
        else
        {
            charges=25.0;
        } 
       return charges;
    }
    else 
    {
        cout<<"error"<<endl;
    }

}