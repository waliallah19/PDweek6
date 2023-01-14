#include<iostream>
using namespace std;

string activity(string,string);
main()
{
  string temperature, humidity;
  cout<<"Enter temperature: ";
  cin>>temperature;
  cout<<"Enter humidity: ";
  cin>>humidity;
  cout<<activity(temperature,humidity);
}
string activity(string t,string h)
{
 if(t == "warm" && h == "dry")
 return "Play tennis";
 else if(t == "warm" && h == "humid")
 return "Swim";
 else if(t == "cold" && h == "dry")
 return "Play Basketball";
 else if(t == "cold" && h == "humid")
 return "Watch TV";
}