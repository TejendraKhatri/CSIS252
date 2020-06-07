// File:      <main4>
// Name:      <Tejendra>
// Class:     CSIS 252
// Program:   assignment 1
// Date:      <1/14/2018>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Program description
//This program calculates the length of the hypotenuse using the length
//of the other two sides.

int main()
{

//Variables
  double side1,        //length of side A to be input
         side2,        //length of side B to be input
	 hypotenuse;   //calculated length of the hypotenuse
	 
  cout<<fixed<<showpoint<<setprecision(2);      //formatting to 2 decimal places
  
  cout<<"This program inputs the length of two sides of a "<< endl;
  cout<<"right angled triangle and gives out the length of the hypotenuse."<< endl<<endl;
  cout<<"Please enter the length of a side of the triangle:";
  cin>>side1;
  cout<<"\nPlease enter the length of the other side of the triangle:";
  cin>>side2;
  
  hypotenuse = sqrt(pow(side1,2)+pow(side2,2));
  
  cout<<"\nThe lenth of the hypotenuse of the triangle is "<< hypotenuse << endl;
  return 0;
}