#include<iostream>
using namespace std;

float apartment(string ,int);
float studio(string ,int);
main()
{
 string month;
 int stays;
 float abill,sbill;
 cout<<"Enter the month: ";
 cin>>month;
 cout<<"Enter the number of stays: ";
 cin>>stays;
 abill = apartment(month , stays);
 sbill = studio(month , stays);
 cout<<"Apartment: "<<abill<<"$"<<endl;
 cout<<"Studio: "<<sbill<<"$";
}
float apartment(string month ,int stays)
{
 float fprice,price;
 if(month == "May" || month == "October")
 {
  price = 65.00 * stays;  
 }
 else if(month == "June" || month == "September")
 {
  price = 68.75 * stays;
 }
 else if(month == "July" || month == "August")
 {
  price = 77.00 * stays;
 }
 if(stays < 15)
 {
 return price;
 }
 else 
 {
  fprice = price - (0.10 * price);
  return fprice;
 }
}
float studio(string month ,int stays)
{
 float price,fprice;
 if(month == "May" || month == "October")
 {
  price = 50.00 * stays;  
  if(stays < 8)
  {
   return price;
  }
  else if(stays > 7 && stays < 15) 
  {
   fprice = price - (0.05 * price);
   return fprice;
  }
  else 
  {
   fprice = price - (0.30 * price);
   return fprice;
  }
 }
 else if(month == "June" || month == "September")
 {
  price = 75.20 * stays;
  return price;
  if(stays > 14) 
  {
   fprice = price - (0.20 * price);
   return fprice;
  }
 }
 else if(month == "July" || month == "August")
 {
  price = 76.00 * stays;
  return price;
 }
}
