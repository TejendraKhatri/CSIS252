// File:      <main.cpp>
// Name:      <Tejendra Khatri>
// Class:     CSIS 252
// Program:   assignment #3
// Date:      <2/6/2018>

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

//This program includes basic operations with the arrays 
//such as storing values in arrays
//iterating over the values and output those values

const int sentinel = 0;
const int arraysize = 20;

int main()
{
  
  //Variables
  
  int posArray[arraysize],    // array of positive integers
      negArray[arraysize],    //array of negative integers
      evenArray[arraysize],   //array of even positive integers
      oddArray[arraysize],    //array of odd positive integers
      evenCount=0,
      oddCount = 0,
      posCount=0,
      negCount=0,
      sumEven = 0,            //sum of even positive integers
      sumOdd = 0,             //sum of odd positive integers
      num,
      evenIndex = 0,
      oddIndex = 0,
      evenVal=0,
      oddVal=0;
  double evenposAvrg=0,
         oddposAvrg=0;
  bool found;
  
  //1. reading ints from keyboard and storing the values in respective arrays  
  cout<<"Enter ints ("<< sentinel << " to exit): ";
  
  cin >> num;
  while (num != sentinel)
  {
    if (num>0 && posCount < arraysize)
    {
      posArray[posCount] = num;
      posCount++;
    }
    else if (num<0 && negCount < arraysize)
    {
      negArray[negCount] = num;
      negCount++;
    }
    cin >> num;
  }

    
  //2. printing the ints in the negative array on a single line.
  cout << "\nNegative array: ";
  for (int i=0; i < negCount; i++)
    cout << negArray[i] << " ";
  
  //3. printing the absolute values of negative array in reverse order
  for (int i = 0 ; i < negCount; i++)
    negArray[i] = negArray[i] * (-1);
    
  cout << "\nReverse negative array: ";
  for (int j = (negCount - 1); j >= 0; j--)
    cout << negArray[j] << " " ;
  
  //4. distributing the ints from positive array into even and odd positive arrays.
  for (int i = 0; i < posCount; i++)
    if (posArray[i] %2 == 0)
    {
      evenArray[evenCount] = posArray[i];
      evenCount++;
    }
    else
    {
      oddArray[oddCount] = posArray[i];
      oddCount++;
    }
    cout << "\nEven positive units: ";
    for (int a = 0 ; a < evenCount ; a++)
      cout << evenArray[a] << " ";
    cout << "\nOdd positive units: ";
    for (int b = 0; b < oddCount ; b++)
      cout << oddArray[b] << " ";
     
    //5. printing the average of the even positive array
    cout<<fixed<<showpoint<<setprecision(2);
    for (int i= 0; i < evenCount; i++)
      sumEven = sumEven + evenArray[i];
    evenposAvrg = static_cast<double>(sumEven)/evenCount;
    cout<< "\nThe average of the even positive array is " << evenposAvrg<< endl;
    
    //6.printing the average of the odd positive array
    for (int j = 0; j <oddCount; j++)
      sumOdd = sumOdd + oddArray[j];
    oddposAvrg = static_cast<double>(sumOdd)/oddCount;
    cout << "The average of the odd positive array is " << oddposAvrg << endl;
    
    //7.
    found = false;
    int x = 0;
    while (!found && x < evenCount)
    {
      if (evenArray[x] <= evenposAvrg)
      {
	evenIndex = x;
	evenVal = evenArray[x];
	found = true;
      }
      x++;
    }
    
    //8.
    found = false;
    int y = oddCount-1;
    while (!found and y>=0)
    {
      if (oddArray[y] >= oddposAvrg)
      {
	oddIndex = y;
	oddVal = oddArray[y];
	found = true;
      }
      y--;
    }
        
       
    cout<<"The first value in the even positive array that is less than or equal to the average of the even positive array is " <<evenVal<< " and was found in the position: "<<evenIndex<<endl;
    cout<<"The first value in the odd positive array from backwards that is greater than or equal to the average of the odd positive array is " <<oddVal<< " and was found in the position: "<<oddIndex<<endl;        
    
 return 0;   
}
 