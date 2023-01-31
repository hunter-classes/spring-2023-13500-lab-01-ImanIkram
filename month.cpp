/*
Author: Iman Ikram
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 1d

The program asks the user to input the year and the month (1-12) and prints the number of days in that month (taking into account leap years)
*/

#include <iostream>

int main(){
  
int year;
int month;

std:: cout << "Enter year: " ;
std:: cin >> year;

std:: cout << "Enter month: " ;
std:: cin >> month;

if (month == 2){ 
if (year % 4 != 0){
  std:: cout << "28 days" << std::endl;
} else if (year % 100 != 0){
  std::cout << "29 days" << std::endl;
} else if (year % 400 != 0) {
  std::cout << "28 days" << std::endl;
} else {
  std::cout << "29 days" << std::endl;
  }
} 

else if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12){
 std::cout << "31 days" << std::endl; 
} else if (month == 4 or month == 6 or month == 9 or month == 11) {
  std::cout << "30 days" << std:: endl;
} 

return 0;
}