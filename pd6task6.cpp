#include <iostream>
#include <string>
using namespace std;
string calculateHotelPrices(string m, int ns);
main()
{
    string m;
    int ns;
    float st,ap;
    cout<<"Enter the month (May,June,July,August,September,October):";
    cin>>m;
    cout<<"Enter the number of stays:";
    cin>>ns;
    string res=calculateHotelPrices(m, ns);
    cout<<res;
    
}
string calculateHotelPrices(string m, int ns)
{
    float pst,pap,ap,st;
    string result;

    if (m=="May" || m=="October")
    {
        if(ns<=7)
        {
            ap=65*ns;
            st=50*ns;
            
        }
        if(ns>7 && ns<=14)
        {
           
            ap=65*ns;
            pst=st*0.05;
            st=st-pst;
            
        }
        if(ns>14)
        {
            ap=65*ns;
            pap=ap*0.10;
	        ap=ap-pap;
            st=(50*ns);
            pst=st*0.30;
            st=st-pst;
        }

    }
    if (m=="June" || m=="September")
    {
        if(ns<=14)
        {
            ap=68.70*ns;
            st=75.20*ns;

        }
        if(ns>14)
        {
            st=75.20*ns;
            pst=st*0.20;
            st=st-pst;
            ap=68.70*ns;
            pap=ap*0.10;
            ap=ap-pap;
        }
    }
	if (m=="July" || m=="August")
    {
        if(ns<=14)
        {
            ap=77*ns;
            st=76*ns;
        }
         if (ns>14)
	    {
            st=76*ns;
	      	ap=77*ns;
            pap=ap*0.10;
            ap=ap-pap;
        }
    }
    
    result += "Apartment: "+to_string(ap)+"$"+"\n";
    result += "Studio: "+to_string(st)+"$"+"\n";
    return result;
}