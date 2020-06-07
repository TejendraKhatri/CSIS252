// File:      <main5>
// Name:      <Tejendra>
// Class:     CSIS 252
// Program:   assignment 1
// Date:      <1/14/2018>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Program description
//This program calculates the monthly payment, the total amount paid ,
//and the total interest paid for a standard loan amortized 
//for a specific period of time.

int main()
{

//Variables
  int    term;           //term of the loan in months to be input
  double loanAmt,        //loan amount to be input
         APR,            //annual percentage rate to be input
	 monthlyPmt,     //calculated monthly payment
	 totalAmt,       //calculated total amount paid
	 totalInt,       //calculated total interest paid
	 intRate;        //calculated monthly interest rate
	 
  cout<<"This program inputs loan amount,APR and term of the loan"<<endl;
  cout<<" and gives out the monthly payment ,total amount paid and "<<endl;
  cout<<"the total interest paid over the time period."<<endl<<endl;
  
  cout<<"Please enter the total loan amount:";
  cin>>loanAmt;
  cout<<"\nPlease enter the annual percentage rate(APR):";
  cin>>APR;
  cout<<"\nPlease enter the number of terms of the loan in months:";
  cin>>term;
  
  intRate = APR/1200;
  monthlyPmt= loanAmt * (intRate + intRate/(pow((1+intRate),term)-1));
  totalAmt = monthlyPmt * term;
  totalInt = totalAmt - loanAmt;
  
  cout<<"\nThe monthly payment is $"<< monthlyPmt<<endl;
  cout<<"The total amount paid over the period is $"<<totalAmt<<endl;
  cout<<"And the total interest paid is $"<<totalInt<<endl<<endl;
  
  return 0;
}