#include <iostream>
using namespace std;
									//taking two integers and finding their sum

 int sum (int a,int b){
      int c;
      c=(a+b);
      return (a+b);
}
									//taking two numbers and finding the maiximum one

 int max1 (int a,int b){
   int c;
   if (a>b){return a;}
   else if(b>a){return b;}
   else if (a==b){return 0;}
}
									//taking two numbers and finding the minimum one
  int min1 (int a,int b){
   int c;
   if (b>a){return a;}
   else if(a>b){return b;}
   else if (a==b){return 0;}
}

 int main(){
 int a,b,c,d;
									//asking user two input 2 integers
 cout <<"What are the two numbers you want to enter?"<<endl;
 cin >>a>>b;
									//asking user what does he want to do
 cout <<"To view the sum of your number type 1"<<endl;
 cout <<"To view the maximum number type 2"<<endl;
 cout <<"To view the minimum number type 3"<<endl;
 cin >> d;
									//performing the requested job
								 	//calling for sum
 if (d==1){
 c=sum(a,b);
     cout << "The sum is "<<c<<endl;
}
									//calling for maximum
 else if (d==2){
c=max1(a,b);
  if (c==0){
  cout <<"The numbers are equal "<<endl;}
  else {cout<<"The maximum number is "<<c<<endl;}}

									//calling for minimum
 else if (d==3){
 c=min1(a,b);
  if (c==0){
  cout <<"The numbers are equal "<<endl;}
  else {cout<<"The minimum number is "<<c<<endl;}}
 return 0;
}


 
 
