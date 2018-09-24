							//library
#include<iostream>
using namespace std;
int sumsquareOddNumbers (int firstNum,int secondNum){
 
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
 							//defining the condition for constructing the loop for squaresuming the numbers
 
  int square=++firstNum;
  int sumloop=firstNum*firstNum;		
  int secondoddNum=firstNum;
  while (secondoddNum<secondNum){
  secondoddNum=secondoddNum+2;
  int second=secondoddNum*secondoddNum;

  sumloop=sumloop+second;
}
  return sumloop;
  
    
}
 int main(){
 int firstNum,secondNum,sum;				//driver function
 
 							//asking the user for two numbers
 cout<<"What is the first number that you want to add in the square series?"<<endl;
 cin >>firstNum; 
 cout <<"What is the last number that you want to add in the square series?"<<endl;
 cin >>secondNum;
 							//calling for sum
 sum=sumsquareOddNumbers(firstNum,secondNum);
 cout <<"The result of the square sum of odd numbers between "<<firstNum <<" and "<<secondNum <<" is "<<sum<<endl;

  return 0;
}


									//defining variable

									//squaring the sum of the square of numbers

									//driver function
