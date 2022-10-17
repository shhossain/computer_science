#include<iostream>

using namespace std;


// function that ask an integer and returns it
int ask_number(){

  // declaring variable named number as an integer
  int number ;

  // ask for input and save it in number
  std::cin >> number;

  // loop that check wether number is an integer
  while (cin.fail() || number < 0 ) {

    std::cout << "Enter a positive integer please" << '\n';

    // clearing cin.fail() status
    cin.clear();
    // clearing the iostream buffer
    cin.ignore(256,'\n');
    // ask for input and save it in number
    std::cin >> number;

  }

  // returning the number for the function ask_number()
  return number;
}

int main () {

  // declaring integer to store starting , ending and total years
  int fromYear , toYear, total_years =0 ;

  std::cout << "Enter the year you wanna start" << '\n';
  // run the function ask_number() and store it's return fromYear
  fromYear = ask_number();

  std::cout << "Enter the year you wanna end" << '\n';
  // run the function ask_number() and store it's return toYear
  toYear = ask_number();

  // loop that keep running until to years are greater than from years
  while (toYear<=fromYear) {
    std::cout << "ending year should be smaller then starting year" << '\n';
    // run the function ask_number() and store it's return toYear
    toYear = ask_number();
  }

  // loop that run from starting years to ending years
  for (int i = fromYear-1; i < toYear+1; i++) {

    // check if the year is divisble by four and not divisble by 100
    // or if its divisible by both four hunder and one hundred
    if ((i%100)!=0 ? (i%4==0) : i%400==0 ) {
      std::cout << i << '\n';
      // incrementing the total leap years counter
      total_years++;
    }

  }

  // displaying total leaps years
  std::cout << "total number o fleap years in betweeen :"<< total_years << '\n';

  return 0;

}
