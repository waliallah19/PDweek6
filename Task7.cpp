#include<iostream>
using namespace std;

int calculationd(int,int,int,int);
int calculationh(int,int,int,int);
int calculationm(int,int,int,int);
string calculation(int,int,int,int);
main()
{
 int eh,em,ah,am,t1,t2,t3,t4,diff1,diff2,h,m;
 string arrival;
 cout<<"Enter exam starting time(Hours): ";
 cin>>eh;
 cout<<"Enter exam starting time(Minutes): ";
 cin>>em;
 cout<<"Enter Student's arrival time(Hours): ";
 cin>>ah;
 cout<<"Enter Student's arrival time(Minutes): ";
 cin>>am;
 arrival = calculation(eh,em,ah,am);
 cout<<arrival<<endl;
 t1 = eh * 60;
 t2 = t1 + em;
 t3 = ah * 60;
 t4 = t3 + am;
 diff1 = t4 - t2;
 diff2 = t2 - t4;
 if(t4 > t2)
 {
  h = diff1 / 60;
  m = diff1 % 60;
  if (h != 0 )
  cout<<h<<":";
  if(m<10)
  cout<<"0";
  cout<<m<<" minutes after the start.";
 }
 else
 {
  h = diff2 / 60;
  m = diff2 % 60;
  if (h != 0 )
  cout<<h<<":";
  if(m<10)
  cout<<"0";
  cout<<m<<" minutes before the start.";
 }
}
string calculation(int eh,int em,int ah,int am)
{
 int tme,tma,edl;
 tme = eh * 60;
 tme = tme + em;
 edl = tme - 31;
 tma = ah * 60;
 tma = tma + am;
 if (tma > tme)
 return "Late";
 else if(tma < tme && tma > edl)
 return "On Time";
 else 
 return "Early";
}