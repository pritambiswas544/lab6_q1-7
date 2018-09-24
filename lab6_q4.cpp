#include <iostream>
using namespace std;
									//taking two integer inputs,finding their minimum and returning the minimum

 int min1 (int a,int b){
   int c;
   if (b>a){return a;}
   else if(a>b){return b;}
   else if (a==b){return 0;}
}

 									// using void
   void min2 (int a,int b,int &c){
   if (b>a){c=a;}
   else if (a>b){c=b;}
   else if (a==b){c=0;}
}
									//driver function
 int main(){
  int a,b,c,d;


									//asking user for two intgers
  cout <<"Enter the numbers that you want to compare between"<<endl;
  cin >>a>>b;
									//finalizing through min1
  c=min1(a,b);
  if (c==0){
  cout <<"The numbers are equal "<<endl;}
  else {cout<<"The minimum number is "<<c<<endl;}
  
									//through min2
  min2(a,b,d);
  if (c==0){
  cout <<"The numbers are equal "<<endl;}
  else {cout <<"The minimum number is "<<d<<endl;}
  
  return 0;
}
 
 
