#include <iostream>
using namespace std;

#include "money.h"

int main()
{

  int input;

  cout << "Input a positive integer number of pence: ";
  cin >> input;

  Money amount(input);
  Money default1;

  cout << "Initial values:\n";
  amount.printMoney();
  default1.printMoney();

  Money sum = amount + default1;
  cout << "\nAfter summing amounts:\n";
  sum.printMoney();

  if(amount>default1)
    cout << "\nThe inputted value is greater than the default value.\n";

  else if(default1>amount)
    cout << "\nThe inputted value is less than the default value.\n";
  else
    cout << "\nThe values are equal.\n";

  ++amount;
  cout << "\nAfter incrementing amounts by 1 penny:\n";
  amount.printMoney();

  ++default1;
  default1.printMoney();

  int numPence;

  cout << "\nInput a positive integer number of pence: ";
  cin >> numPence;

  cout << "After adding " << numPence << " pence:\n";
  Money sum1 = amount.addPence(numPence);
  sum1.printMoney();

  Money sum2 = default1.addPence(numPence);
  sum2.printMoney();

  return 0;

}
