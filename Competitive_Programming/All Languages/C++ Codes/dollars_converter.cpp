#include<iostream>

using namespace std;



// function that ask an float and returns it
float ask_price(){

  // declaring variable named number as an float
  float number ;

  // ask for input and save it in number
  std::cin >> number;

  // loop that check wether number is an integer
  while (cin.fail() || number < 0 ) {

    // checking if it was an ineteger
    if (cin.fail()) {
      std::cout << "Enter an integer please" << '\n';
    }
    // checking wether the number was was smaller than 0
    if (number < 0) {
      std::cout << "value is smaller than 0 ... enter value again" << '\n';
    }

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

  // declaring floats to save paid price and the bill price
	float due_price ,paid_price;
  // declaring floats to save the return price
  int return_price;

  std::cout << "Enter the amount to pay" << '\n';
  //running ask_price() and saving it return in due_price
  due_price = ask_price();

  std::cout << "enter the ammount paid" << '\n';
  //running ask_price() and saving it return in paid_price
  paid_price= ask_price();

  // loop that will keep running until paid price is greater
  while (paid_price< due_price) {
    std::cout << "Paid price cant be smaller than due price" << '\n';
    //running ask_price() and saving it return in paid_price
    paid_price= ask_price();
  }

  // telling use what will be the total return in dollars
  std::cout << "price to pay is : " << paid_price-due_price << '\n';

  // calculating the return price and saving it in cents
  return_price= (paid_price-due_price)*100;

  // calculating the price in dollar and displaying it
  std::cout << return_price/100 << " dollars" << '\n';

  // useing mod to remove the hundreds (dollars) from the cents
  return_price= return_price%100;
  // calculating the price in quarters and displaying it
  std::cout << return_price/25 << " quarters" <<'\n';

  // useing mod to remove the 25s (quarters) from the cents
  return_price= return_price%25;
  // calculating the price in dimes and displaying it
  std::cout << return_price/10 << " dimes" <<'\n';

  // useing mod to remove the 10s (dimes) from the cent
  return_price= return_price%10;
  // calculating the price in nickels and displaying it
  std::cout << return_price/5 << " nickel" << '\n';

  // useing mod to remove the 5s (nickels) from the cent
  return_price= return_price%5;
  // printing the remaining pennies
  std::cout << return_price << " pennies" <<'\n';

	return 0;

}
