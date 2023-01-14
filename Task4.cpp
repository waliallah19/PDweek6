#include<iostream>
using namespace std;

float calculation(char, char, int);
main()
{
 int minutes;
 float bill;
 char time, type;
 cout<<"Enter which type of custmer you are Regular(R) or Premium(P): ";
 cin>>type;
 cout<<"Press D for Day time or N for Night time: ";
 cin>>time;
 cout<<"Enter number of minutes you used the service: ";
 cin>>minutes;
 bill = calculation(type,time,minutes);
 if(bill == 0.0)
 {
  cout<<"Invalid Input!";
 }
 else 
 {
  cout<<"The charges are : "<<bill<<"$";
 }
}
float calculation(char type, char time, int minutes)
{
 float price;
 float a;
 if (type == 'R' && time == 'D' || time == 'N')
 {
  if( minutes < 51)
  {
   price = 10.00;
   return price;
  }
  else 
  {
   a = minutes - 50;
   price = 0.20 * a + 10.00;
   return price;
  }
 }
 else if(type == 'P' && time == 'D')
 {
  if(minutes < 76)
  {
   price = 25.00;
   return price; 
  }
  else 
  {
   a = minutes - 75;
   price =  (a * 0.10) + 25.00;
  }
 } 
 else if(type == 'P' && time == 'N')
 {
  if(minutes < 101)
  {
   price = 25.00;
   return price; 
  }
  else 
  {
   a = minutes - 100;
   price =  (a * 0.05) + 25.00;
  }
 } 
 else 
 {
  price = 0.0;
  return price; 
 }
 
}