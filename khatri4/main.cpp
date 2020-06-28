// File:      <main.cpp>
// Name:      <Tejendra Khatri>
// Class:     CSIS 252 
// Program:   assignment #4
// Date:      <2/13/2018>
 

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

//This program inputs the test scores of students and stores them in an array
//and outputs the grades received by the students, maximum score , highest and lowest scores
//average score, median score and the standard deviation of scores.

const int sentinel = -1; 
const int arraySize = 30;
const double min_A = 90;    //minimum requirement for grade A
const double min_B = 80;    //minimum requirement for grade B
const double min_C = 70;    //minimum requirement for grade C
const double min_D = 60;    //minimum requirement for grade D


//read function that stores the stores the test scores in an array
void read(int scores[],int& count,int& maximum)
{
  int num;
  count= 0;
  cout << "Enter the maximum number of points possible: " ;
  cin >> maximum;
  cout << "Enter the scores of the students or "<< sentinel << " to quit:";
  cin>> num;
  while (num != sentinel && count < arraySize)
    if (num <= maximum && num >= 0)
    {
      scores[count] = num;
      count++;
      cin>> num;
      }
    else
      cin >> num;
      
}

//sort function that sorts the test scores in the array in descending order
void sort(int scores[], int count)
{
   int temp;
   int large;
   for (int i=0; i<(count-1); i++)  // put n-1 ints in their correct spot
   {
      large=i;
      for (int j=i+1; j<count; j++)  // loop to find the largest
         if (scores[j] > scores[large])
            large=j;
      temp = scores[i];         // put largeest in proper position
      scores[i] = scores[large];
      scores[large] = temp;
   }
}

//function to calculate the grade achieved based on the percentage attained
char gradeCalc(int pct)
{
  if (pct >= min_A)
    return 'A';
  else if (pct >= min_B)
    return  'B';
  else if (pct >= min_C)
    return  'C';
  else if (pct >= min_D)
    return  'D';
  else
    return  'F';
}   

//function to print the test scores, percentage and respective letter grades 
void outputScores(const int scores[],int count, int maximum)
{
  double pct;
  cout << setw(8) << "Score" << setw(20) <<right<< "Percentage" << setw(10) << "Grade" <<  endl;
  cout << "----------------------------------------"<<endl;
  cout<<fixed << showpoint << setprecision(2);
  for (int i=0; i < count ; i++)
  {
    pct  = static_cast<double>(scores[i]) /maximum * 100;
    cout << setw(8) << right << scores[i] <<setw(20) << right << pct <<" %" << setw(8) << right << gradeCalc(pct) << endl;
  }    
}

//function to calculate the average of the test scores
double average(const int scores[],int count)
{
  int sum = 0;
  double avrg;
  for (int i = 0; i < count; i++)
    sum = sum + scores[i];
  avrg = static_cast<double>(sum)/count;
  return avrg;
}

//function to calculate the median score
double median(const int scores[],int count)
{ 
  double median;
  if (count%2 != 0)
  {
    int position;
    position = (count + 1) / 2;
    median = scores[position-1];
  }
  else
  {
    int pos1,pos2;
    pos1 = count / 2 ;
    pos2 = pos1 + 1;
    median = static_cast<double>(scores[pos1-1]+scores[pos2-1])/2;    
  }
  return median;
}

//function to calculate standard deviation of the test scores
double stndDev(const int scores[], int count)
{
  double mean;
  double sumDiffSqr = 0;
  double stdDev;
  
  mean = average(scores,count);
  
  for (int i = 0 ; i<count; i++)
    sumDiffSqr += pow((scores[i] - mean),2);
  
  stdDev = sqrt(sumDiffSqr / count);
  return stdDev;
}
  
   

void outputSummary(const int scores[], int count, int maximum)
{
  int range;
  range = scores[0] - scores[count-1];
  cout << "\nThe maximum score is : " << maximum <<endl;
  cout << "The number of students processed is : " << count << endl;
  cout << "The high score is : " << scores[0] <<endl;
  cout << "The low score is : " << scores[count-1] << endl;
  cout << "The range of scores is : " << range <<endl;
  cout << "The average score is : " << average(scores,count) << endl;
  cout << "The median score is : " << median(scores,count) << endl;
  cout << "The standard deviation is : " << stndDev(scores, count) << endl;
}

int main()
{
   int scores[arraySize]; //array containing the test scores 
   int count;
   int maximum;           //maximum score that can be achieved in the test

   read(scores,count,maximum);
   sort(scores,count);
   outputScores(scores,count,maximum);
   outputSummary(scores,count,maximum);

   return 0;
}



