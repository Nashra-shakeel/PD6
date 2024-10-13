#include<iostream>
using namespace std;
void decideActivity(string,string);
main()
{
    string temp,humid;
    cout<<"Enter temperature(warm or cold):";
    cin>>temp;
    cout<<"Enter humidity(dry or humid):";
    cin>>humid;
    decideActivity(temp,humid);
}
void decideActivity(string temp,string humid)
{
    if(temp=="warm")
    {
        if(humid=="humid")
        {
            cout<<"Recommended activity:Swim";
        }
        else if(humid=="dry")
        {
            cout<<"Recommended activity:Play tennis";
        }
        else
        {
            cout<<"Invalid input";
        }
    }
    else if(temp=="cold")
    {
        if(humid=="humid")
        {
            cout<<"Recommended activity:Watch TV";
        }
        else if(humid=="dry")
        {
            cout<<"Recommended activity:Watch TV";
        }
        else
        {
            cout<<"Invalid input";
        }
    }
    else
    {
        cout<<"Invalid input.";
    }
}