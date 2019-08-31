// Name:
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  double cost, tax, tip;
  double bill;

  // Get the total bill.
  std::cout << "```\n";
  std::cout << "Welcome to the Restaurant Bill Calculator!\n";

  // identify meal cost.
  std::cout << "What is the total meal cost? $";
  std::cin >> cost;


  // Calculate the tax and tip of the meal.
tax = cost * 0.0775;
tip = cost * 0.20;
bill = cost + tax + tip;

// Calculate and display Total bill
std::cout << "Tax:" << "\t   $" << tax << '\n';
std::cout << "Tip:" << "\t   $" << tip << '\n';
std::cout << "Total Bill:" << "$" << bill << '\n';
std::cout << "```\n";

  return 0;
}
