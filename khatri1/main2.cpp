// File:      <main2>
// Name:      <Tejendra>
// Class:     CSIS 252
// Program:   assignment 1
// Date:      <1/14/2018>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Program description
//This program calculates the diameter, circumference and area of the circle 
// using the radius.

const double pi = 22.0/7;

int main()
{

//Variables
  
  double radius,           //radius to be input
         diameter,         //calculated diameter using radius
	 circumference,    //calculated circumference of the circle
	 area;             //calculated area of the circle
  cout<<pi;	 
  cout<<"This program inputs the radius then presents the diameter,"<<endl;
  cout<<"circumference, and area of the circle"<<endl;
  
  cout<<fixed<<showpoint<<setprecision(2);        //formatting to two decimal places
  
  cout<<"Please enter the radius of the circle:";
  cin>>radius;
  
  diameter=radius * 2 ; 
  circumference = 2 * pi * radius;
  area = pi * pow(radius,2) /2;
  
  cout<<"\nThe diameter of the circle is "<< diameter << endl;
  cout<<"The circumference of the circle is "<< circumference << endl;
  cout<< " and the radius is "<< area << endl<<endl;
  
  return 0;
}
	 