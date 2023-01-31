/*
Author: Iman Ikram
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 1c

The program asks the user to input an integer representing a year number. If the input year is a leap year according to the modern Gregorian calendar, it should print Leap year, otherwise, print Common year.
*/

#include <iostream>

int main(){
  
 int year;
 std:: cout << "Enter year: " ;
 std:: cin >> year;
  
if (year % 4 != 0){
  std:: cout << "Common year" << std::endl;
} else if (year % 100 != 0){
  std::cout << "Leap year" << std::endl;
} else if (year % 400 != 0) {
  std::cout << "Common year" << std::endl;
}
else{
  std::cout << "Leap year" << std::endl;
} 
 return 0; 
}