#include<iostream>
using namespace std;

string zodiac_sign(string,int);
main()
{
 string month,zs;
 int date;
 cout<<"Enter month: ";
 cin>>month;
 cout<<"Enter date: ";
 cin>>date;
 zs = zodiac_sign(month,date);
 cout<<"Zodiac Sign: "<<zs;
}
string zodiac_sign(string month,int date)
{
 if(month == "March" && date > 20 && date <32)
 return "Aries"; 
 else if(month == "April" && date > 0 && date < 20)
 return "Aries";
 else if(month == "April" && date > 19 && date <31)
 return "Taurus";
 else if(month == "May" && date > 0 && date <21)
 return "Taurus";
 else if(month == "May" && date > 20 && date <32)
 return "Gemini";
 else if(month == "June" && date > 0 && date <21)
 return "Gemini";
 else if(month == "June" && date > 20 && date <31)
 return "Cancer";
 else if(month == "July" && date > 0 && date <23)
 return "Cancer";
 else if(month == "July" && date > 22 && date <32)
 return "Leo";
 else if(month == "August" && date > 0 && date < 23)
 return "Leo";
 else if(month == "August" && date > 22 && date <32)
 return "Virgo";
 else if(month == "September" && date > 0 && date <23)
 return "Virgo";
 else if(month == "September" && date > 22 && date <31)
 return "Libra";
 else if(month == "October" && date > 0 && date <23)
 return "Libra";
 else if(month == "October" && date > 22 && date <32)
 return "Scorpio";
 else if(month == "November" && date > 0 && date <21)
 return "Scorpio";
 else if(month == "November" && date > 20 && date <31)
 return "Sagittarius";
 else if(month == "December" && date > 0 && date <22)
 return "Sagittarius";
 else if(month == "December" && date > 21 && date <32)
 return "Capricorn";
 else if(month == "January" && date > 0 && date <20)
 return "Capricorn";
 else if(month == "January" && date > 19 && date <32)
 return "Aquarius";
 else if(month == "February" && date > 0 && date <19)
 return "Aquarius";
 else if(month == "February" && date > 18 && date <30)
 return "Pisces";
 else if(month == "March" && date > 0 && date <21)
 return "Taurus";
}

