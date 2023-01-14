#include<iostream>
using namespace std;

string calculation(float);
main()
{
 int english,maths,chemistry,social_science,biology,total;
 string name,result;
 float percentage;
 cout<<"Enter Student's name: ";
 cin>>name;
 cout<<"Enter marks of English: ";
 cin>>english;
 cout<<"Enter marks of Maths: ";
 cin>>maths;
 cout<<"Enter marks of Chemistry: ";
 cin>>chemistry;
 cout<<"Enter marks of Social Science: ";
 cin>>social_science;
 cout<<"Enter marks of Biology: ";
 cin>>biology;
 total = english+maths+chemistry+social_science+biology;
 percentage = (total/500.0) * 100.0;
 result = calculation(percentage);
 cout<<"Name: "<<name<<endl;
 cout<<"Total Marks: 500"<<endl;
 cout<<"Percentage: "<<percentage<<"%"<<endl;
 cout<<"Grade: "<<result;
}
string calculation(float percentage)
{
 if( percentage > 89 && percentage < 101)
 return "A+";
 else if( percentage > 79 && percentage < 91)
 return "A";
 else  if( percentage > 69 && percentage < 81)
 return "B+";
 else  if( percentage > 59 && percentage < 71)
 return "B";
 else  if( percentage > 49 && percentage < 61)
 return "C";
 else  if( percentage > 39 && percentage < 51)
 return "D";
 else  if(percentage < 40) 
 return "F";
}
