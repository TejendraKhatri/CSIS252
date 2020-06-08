// File:      <main.cpp>
// Name:      <Tejendra>
// Class:     CSIS 252
// Program:   assignment 2
// Date:      <1/25/2018>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Program description
//This program inputs high and low temperatures of days of a specific month and
//gives out the maximum high temperature, minimum high tempaerature
//maximum low temperature, minimum low temperature
//the average high temperature and the average low temperature for
//that specific period of time.

const int sentinel = -999;


//This function converts a fahrenheit to a celcius.
int tempConverter(double F)   
{
  double C;
  C = (F-32) * 5.0/9;
  return round(C);   // using the round function to round to a whole number
}

int main()
{

//Variables
  int highTemp;
  int lowTemp;
  int count=0;
  int maxHigh;
  int minHigh;
  int maxLow = -999;     //initializing the value of maxlow to -999 since it will always be greater than that
  int minLow = 999;      //initializing the value of minLow to 999 since it will always be lower than that
  string month;
  int day;
  int sumHigh=0;
  int sumLow=0;
  float averageHigh;
  float averageLow;
  
  cout << fixed << showpoint << setprecision(2); //formats the output to two decimal places
  
  cout << "Month: ";
  cin >> month;
  cout <<  "Day : ";
  cin >> day;
  
  cout << "\nEnter high temperature on "<<month<<" "<<day<<": ";
  cin >> highTemp;
  
  maxHigh = highTemp;
  minHigh = highTemp;
  
  while (highTemp != sentinel)
  {
    cout << "Enter low temperature on "<< month << " " << (day+count) << ": ";
    cin >> lowTemp;
    
    count++;

    cout << "\tHigh: " <<highTemp<< " degrees F, "<< tempConverter(highTemp)<< " degrees C"<<endl;
    cout << "\tLow: " <<lowTemp<< " degrees F, "<< tempConverter(lowTemp)<< " degrees C"<<endl<<endl;
    
    sumHigh += highTemp;
    sumLow += lowTemp;
    
    if (maxHigh < highTemp)
      maxHigh = highTemp;
    if (maxLow < lowTemp)
      maxLow = lowTemp;

    if (minHigh > highTemp)
      minHigh = highTemp;   
    if (minLow > lowTemp)
      minLow = lowTemp;
  
      
    cout << "Enter high temperature on "<<month<<" "<< (day+count) <<": ";
    cin >> highTemp;
  }
  
  averageHigh = static_cast<double>(sumHigh)/count;
  averageLow = static_cast<double>(sumLow)/count;
  
  
  cout << "SUMMARY"<<endl;
  cout << "------------------------------------------------------------------------------------------------------"<<endl;
  cout << "The span of days.For above is: " << month<<" "<<day<<"-"<<(day+count-1)<<endl;
  cout<<"The maximum high temperature is: "<< maxHigh << " degrees F and "<<tempConverter(maxHigh) << " degrees C" <<endl;
  cout << "The minimum high temperature is: " << minHigh << " degrees F and "<<tempConverter(minHigh) << " degrees C"<< endl;
  cout << "The maximum low temperature is: " << maxLow << " degrees F and "<<tempConverter(maxLow) << " degrees C"<< endl;
  cout << "The minimum low temperature is: " << minLow << " degrees F and "<<tempConverter(minLow) << " degrees C"<< endl;
  cout << "The average high temperature is: " << averageHigh << " degrees F and "<<tempConverter(averageHigh) << " degrees C"<< endl;
  cout << "The average low temperature is: " << averageLow << " degrees F and "<<tempConverter(averageLow) << " degrees C"<< endl ; 
  return 0;
}
  
      