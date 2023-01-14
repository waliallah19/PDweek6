#include<iostream>
using namespace std;

float calculation(string fruit, string day, float quantity);
main()
{
 string fruit, day;
 float quantity,bill;
 cout<<"Enter fruit name: ";
 cin>>fruit;
 cout<<"Enter current day of week: ";
 cin>>day;
 cout<<"Enter quantity of fruit: ";
 cin>>quantity;
 bill = calculation(fruit, day, quantity); 
 cout<<"Your total bill is: "<<bill; 
}
float calculation(string fruit, string day, float quantity)
{
 float price;
 if(day == "Sunday" || day == "Saturday")
 {
  if(fruit == "Banana")
  price = quantity * 2.70;
  else if(fruit == "Apple")
  price = quantity * 1.25;
  else if(fruit == "Orange")
  price = quantity * 0.90;
  else if(fruit == "Grapefruit")
  price = quantity * 1.60;
  else if(fruit == "Kiwi")
  price = quantity * 3.00;
  else if(fruit == "Pineapple")
  price = quantity * 5.60;
  else if(fruit == "Grapes")
  price = quantity * 4.20;
 }
 else 
 {
  if(fruit == "Banana")
  price = quantity * 2.50;
  else if(fruit == "Apple")
  price = quantity * 1.20;
  else if(fruit == "Orange")
  price = quantity * 0.85;
  else if(fruit == "Grapefruit")
  price = quantity * 1.45;
  else if(fruit == "Kiwi")
  price = quantity * 2.70;
  else if(fruit == "Pineapple")
  price = quantity * 5.50;
  else if(fruit == "Grapes")
  price = quantity * 3.85;
 }
 return price;
}