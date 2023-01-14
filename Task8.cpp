#include<iostream>
using namespace std;

string check(int,int,int);
main()
{
 int h,x,y;
 string result;
 cout<<"Enter value of h: ";
 cin>>h;
 cout<<"Enter coordinate of x: ";
 cin>>x;
 cout<<"Enter cooridinate of y: ";
 cin>>y;
 result = check(h,x,y);
 cout<<result;
}
string check(int h,int x,int y)
{
  int ymax;
  ymax = 4 * h;
  if(x > h && x < 2*h && y < ymax)
  return "Inside";
  else if(x > 0 && x < 3*h && y < h) 
  return "Inside";
  else if(x == 0 && y < h)
  return "On Border";
  else if(x <= h && y == h)
  return "On Border";
  else if(x == h && y < ymax && y > h)
  return "On Border";
  else if(x >= h && x <= 2*h && y == ymax)
  return "On Border";
  else if(x == 2*h && y < ymax && y > h)
  return "On Border";
  else if(x >= 2*h && x <= 3*h && y == h)
  return "On Border";
  else if(x == 3*h && y <= h)
  return "On Border";
  else
  return "Outside"; 
}