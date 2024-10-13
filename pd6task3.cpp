#include<iostream>
using namespace std;
string findZodiacSign(int,string);
main()
{
    int d;
    string m;
    cout<<"Enter the day of birth:";
    cin>> d;
    cout<<"Enter the month of birth:";
    cin>> m;
    cout<<findZodiacSign(d,m);
}
string findZodiacSign(int d,string m)
{
    string zsign;
    if (d>=21 && d<=31 && m=="March" || d>=1 && d<=19 && m=="April")
    { 
        zsign = "Aries";
    }
    if (d>=20 && d<=30 && m=="April" || d>=1 && d<=20 && m=="May")
    { 
        zsign = "Taurus";
    }
    if (d>=21 && d<=31 && m=="May" || d>=1 && d<=20 && m=="June")
    { 
        zsign = "Gemini";
    }
    if (d>=21 && d<=30 && m=="June" || d>=1 && d<=22 && m=="July")
    { 
        zsign = "Cancer";
    }
    if (d>=23 && d<=31 && m=="July" || d>=1 && d<=22 && m=="August")
    { 
        zsign = "Leo";
    }
    if (d>=23 && d<=31 && m=="August" || d>=1 && d<=22 && m=="September")
    { 
        zsign = "Virgo";
    }
    if (d>=23 && d<=30 && m=="September" || d>=1 && d<=22 && m=="October")
    { 
        zsign = "Libra";
    }
    if (d>=23 && d<=31 && m=="October" || d>=1 && d<=21 && m=="November")
    { 
        zsign = "Scorpio";
    }
    if (d>=22 && d<=30 && m=="November" || d>=1 && d<=21 && m=="December")
    { 
        zsign = "Sagittarius";
    }
    if (d>=22 && d<=31 && m=="Deember" || d>=1 && d<=19 && m=="January")
    { 
        zsign = "Capricon";
    }
    if (d>=20 && d<=31 && m=="January" || d>=1 && d<=18 && m=="February")
    { 
        zsign = "Aquarius";
    }
    if (d>=19 && d<=28 && m=="February" || d>=1 && d<=20 && m=="March")
    { 
        zsign = "Pisces";
    }
    return zsign;
}