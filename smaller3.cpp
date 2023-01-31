/*
Author: Iman Ikram
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 1b

The program asks the user to input three integer numbers and prints out the smaller of the three.
*/

#include <iostream>

int main (){
 int a, b, c;
  
  std::cout <<"Enter the first number: " ;
  std::cin >> a; 
  std::cout << "Enter the second number: " ;
  std::cin >> b;
  std::cout << "Enter the third number: " ;
  std::cin >> c;

  if (a < b && a < c) {
    std::cout << "The smaller of the three is " << a << std::endl; 
  }
  if (b < a && b < c) {
    std::cout << "The smaller of the three is " << b << std::endl; 
  }
  if (c < a && c < b) {
    std::cout << "The smaller of the three is " << c << std::endl; 
  }
  
  return 0;
}