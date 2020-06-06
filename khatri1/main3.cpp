// File:      <main3>
// Name:      <Tejendra>
// Class:     CSIS 252
// Program:   assignment 1
// Date:      <1/14/2018>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Program description
//This program calculates the area of a triangle using the length of its sides.

int main()
{

//Variables
  double side1,            //length of side 1 to be input
	 side2,            //length of side 2 to be input
	 side3,            //length of side 3 to be input
	 area,             //calculated area of the triangle
	 semiPerimeter;    //calculated semi-perimeter of the triangle
	 
  cout<<fixed<<showpoint<<setprecision(2);
  
  cout<<"This program inputs three sides of the triangle "<<endl;
  cout<<"and gives out the area of the triangle,"<< endl;
  
  cout<<"Please enter the length of a side of the triangle:";
  cin>>side1;
  cout<<"\nPlease enter the length of the other side of the traingle:";
  cin>>side2;
  cout<<"\nPlease enter the length of the remaining side:";
  cin>>side3;
  
  semiPerimeter = (side1 + side2 + side3) / 2;

  area = sqrt(semiPerimeter*(semiPerimeter-side1)*(semiPerimeter-side2)*(semiPerimeter-side3));
  
  cout<<"\nThe area of the triangle is "<<area<<endl<<endl;
  
  return 0;
}