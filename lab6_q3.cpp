#include <iostream>
using namespace std;
										//taking two integer inputs,finding their maximum and returning the maximum

 int max1 (int a,int b){
   int c;
   if (a>b){return a;}
   else if(b>a){return b;}
   else if (a==b){return 0;}
}

										// using void
   void max2 (int a,int b,int &c){
   if (a>b){c=a;}
   else if (b>a){c=b;}
   else if (a==b){c=0;}
}
										//driver function
 int main(){
  int a,b,c,d;


										//asking user for two intgers
  cout <<"Enter the numbers that you want to compare between"<<endl;
  cin >>a>>b;
										//finalizing through max1
  c=max1(a,b);
  if (c==0){
  cout <<"The numbers are equal "<<endl;}
  else {cout<<"The maximum number is "<<c<<endl;}
  
										//through max2
  max2(a,b,d);
  if (c==0){
  cout <<"The numbers are equal "<<endl;}
  else {cout <<"The maximum number is "<<d<<endl;}
  
  return 0;
}
 
 
