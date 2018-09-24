/*creating a program to enter a letter,lowercase will be converted to uppercase and vice versa */

#include <iostream>         //library
using namespace std;
      		           //defining variables with ASCII code		
	char toUpper (char lower){
 		char upper = char(int(lower)-32);
 		return upper;
	}
 	char toLower (char upper){
		char lower = char(int(upper)+32);
 		return lower;
	}
			   //driver function

 int main(){
 char character,ultimate;
			   //asking user for inputs
 cout <<"Enter a particular character"<<endl;
 cin >> character;
                           //providing condition
 if (int(character) <= 90 && int(character) >= 65){
                           //calling for lowercase
  ultimate =toLower (character);
  cout << "Your lowercase letter is "<< ultimate << endl;
}
                           //calling for uppercase with condition
  else if(int(character) >= 97 && int(character) <= 122){
  ultimate = toUpper (character);
  cout << "Your uppercase letter is "<< ultimate <<endl;
}
 			   //if the input is not an alphabet
 else {
  cout <<"ERROR 404:your output can't be displayed :("<<endl;
}
 return 0;
}
  




 
     

