#include <iostream>
using namespace std;
										//defining two integers to find the sum of odd numbers between them
 int sumOddNumbers (int firstNum,int secondNum){
 
 										//defining condition for first turning into even
  if (firstNum%2 != 0){
  firstNum++;
}
 										//second number being even
  if (secondNum%2==0){
   secondNum=secondNum-1;
}
										//second number being odd
  else {
  secondNum=secondNum-2;
}
 										//defining the condition for constructing the loop for suming the numbers
 
  int sumloop=++firstNum;
  int secondoddNum=firstNum;
  while (secondoddNum<secondNum){
  secondoddNum=secondoddNum+2;

  sumloop=sumloop+secondoddNum;
}
  return sumloop;
  
    
}
 int main(){
 int firstNum,secondNum,sum;
 
 										//asking the user for two numbers
 cout<<"What is the first number that you want to add in the series?"<<endl;
 cin >>firstNum; 
 cout <<"What is the last number that you want to add in the series?"<<endl;
 cin >>secondNum;
 										//calling for sum
 sum=sumOddNumbers(firstNum,secondNum);
 cout <<"The result of the sum of odd numbers between "<<firstNum <<" and "<<secondNum <<" is "<<sum<<endl;

  return 0;
}

