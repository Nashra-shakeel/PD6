#include<iostream>
using namespace std;
float calculateFruitPrice(string,string,int);
main()
{
    string fruit,day;
    int quantity;
    float result;
    cout<<"Enter the fruit name:";
    cin>>fruit;
    cout<<"Enter the day of the week:";
    cin>> day;
    cout<<"Enter the quantity:";
    cin>>quantity;
    result=calculateFruitPrice(fruit,day,quantity);
    cout<<result;
}
float calculateFruitPrice(string fruit,string day,int quantity)
{
    float price;
    if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday")
    {
        if(fruit=="banana")
        {
            price=2.50*quantity;
        }
        else if(fruit=="apple")
        {
            price=1.20*quantity;
        }
        else if(fruit=="orange")
        {
            price=0.85*quantity;
        }
        else if(fruit=="grapefruit")
        {
            price=1.45*quantity;
        }
        else if(fruit=="kiwi")
        {
            price=2.70*quantity;
        }
        else if(fruit=="pineapple")
        {
            price=5.50*quantity;
        }
        else if(fruit=="grapes")
        {
            price=3.85*quantity;
        }
        else
        {
            cout<<"Invalid fruit name";
        }
    }
    else if(day=="Saturday" || day=="Sunday")
    {
        if(fruit=="banana")
        {
            price=2.70*quantity;
        }
        else if(fruit=="apple")
        {
            price=1.25*quantity;
        }
        else if(fruit=="orange")
        {
            price=0.90*quantity;
        }
        else if(fruit=="grapefruit")
        {
            price=1.60*quantity;
        }
        else if(fruit=="kiwi")
        {
            price=3.00*quantity;
        }
        else if(fruit=="pineapple")
        {
            price=5.60*quantity;
        }
        else if(fruit=="grapes")
        {
            price=4.20*quantity;
        }
        else
        {
            cout<<"Invalid fruit name";
        }
    }
    else
    {
        cout<<"error"<<endl;
    }
    return price;
}