#include <iostream>
using namespace std;
							//defining two integers to find the squaresum of even numbers between them
int sumsquareEvenNumbers (int firstNum,int secondNum){
 
 							//defining condition for first number being even
  if (firstNum%2==0){
  firstNum++;
}
 							//second number being even
  if (secondNum%2==0){
   secondNum=secondNum-2;
}
 							//second number being odd
  else {
  secondNum=secondNum-1;
}
 							//defining the condition for constructing the loop for squaresuming the numbers
 
  int sum=++firstNum;
  int sumloop=firstNum*firstNum;
  int secondevenNum=firstNum;
  while (secondevenNum<secondNum){
  secondevenNum=secondevenNum+2;
  int second=secondevenNum*secondevenNum;

  sumloop=sumloop+second;
}
  return sumloop;
  
    
}							//driver function
 int main(){
 int firstNum,secondNum,sum;
 
 							//asking the user for two numbers
 cout<<"What is the first number that you want to add in the square series?"<<endl;
 cin >>firstNum; 
 cout <<"What is the last number that you want to add in the square series?"<<endl;
 cin >>secondNum;
 							//calling for sum
 sum=sumsquareEvenNumbers(firstNum,secondNum);
 cout <<"The result of the squaresum of even numbers between "<<firstNum <<" and "<<secondNum <<" is "<<sum<<endl;

  return 0;
}


  
   
