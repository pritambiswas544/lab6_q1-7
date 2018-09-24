				/*program about unitCst,units,taxRt,salestax,totdue and calling them accordingly*/
#include<iostream>
using namespace std;
							//funtions for taking inputs about various things
							//function for taking unit cost
 float unitCst(){
 float cost;
 cout<<"Enter the unit cost "<<endl;
 cin>>cost;
 return cost;
}
							//function for taking number of units
 float units(){
 float unit;
 cout<<"Enter the number of units "<<endl;
 cin>>unit;
 return unit;
}
							//function for taking the tax rate
 float taxRt(){
 float rate;
 cout<<"Enter the tax rate "<<endl;
 cin>>rate;
 return rate;
}
							//funtion for calculating salestax
 float salesTx (float unitCst, float units, float taxRt){
 float salestax = unitCst*units*taxRt;
 return salestax;
}
							//funtion for calculating totaldue
 float totDue (float unitCst,float units,float salestax){
 float totaldue=unitCst*units+salestax;
 return totaldue;
}
							//calling by value for every funtion
							//driver function
int main(){
 float a=unitCst();
 float b=units();
 float c=taxRt();
 float d=salesTx(a,b,c);
 float e=totDue(a,b,d);
							//displaying outputs
 cout<<"Your salestax is "<< d << endl;
 cout<<"Your totaldue is "<< e << endl;
 return 0;
}
