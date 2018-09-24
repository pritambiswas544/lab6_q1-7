#include <iostream>
using namespace std;

							//taking two variables and defining their sum
 int sum (int a,int b){
      int c;
      c=(a+b);
      return c;
}

							//using void 
 void f (int a,int b,int &c)
{
     c=(a+b);
}


 int main(){
     int a,b,c,d;
     cout <<"What are the numbers that you want to sum?"<<endl;
     cin >>a>>b;
							//calculating by value
     c=sum(a,b);
     cout << "The sum is "<<c<<endl;
							//calculating by reference     
     f(a,b,d);
     cout <<"The sum of the number is "<<d<<endl;
     return 0;
}
