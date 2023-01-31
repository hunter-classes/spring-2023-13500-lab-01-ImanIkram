/*
Author: Iman Ikram
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Task A. Find the smaller of two integers

 The program asks the user to input two integer numbers and prints out the smaller of the two.
*/

#include <iostream>

int main(){
  int a;
  int b;
  std::cout <<"Enter the first number: " << a;
  std::cin >> a; 
  std::cout << "Enter the second number: " << b;
  std::cin >> b;
  
  if (a < b){
    std::cout << "The smaller of the two is " << a << "\n";
  } else{
    std::cout << "The smaller of the two is " << b << "\n";
  }
return 0; 
}
