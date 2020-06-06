// File:      <main1>
// Name:      <Tejendra>
// Class:     CSIS 252
// Program:   assignment 1
// Date:      <1/14/2018>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Program description
//This program calculates the miles per gallon (MPG) using 
//the kilometers travelled and litres of gasoline used by the car.

int main()
{

//Variables

  double Kilometers, // kilometers input from the keyboard
         Liters,     //liters input from the keyboard
         Miles,      //calculated from kilometers
	 Gallons,    //calculated from the liters of gasoline
	 MPG;        //caculated miles per gallon
	 
  cout << "\nThis program will input Kilometers travelled "<<endl;
  cout << "by a car and the Liters of gasoline used "<< endl;
  cout << "thus giving out the miles per gallon."<<endl<<endl;

  cout << fixed << showpoint << setprecision(2);
  
  cout << "Please enter the number of kilometers travelled by the car:";
  cin >> Kilometers;
  cout << "Please enter the Liters of gasoline consumed by the car:";
  cin >> Liters;
  
  Miles = Kilometers * 0.621371;  //converting kilometers into miles
  Gallons = Liters * 0.264172;    //converting litres into gallons
  
  MPG = Miles / Gallons;
  
  cout<< "\nThe Miles Per Gallon(MPG) is "<< MPG<<endl;
  return 0;
}    