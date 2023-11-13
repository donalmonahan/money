#include <iostream>
using namespace std;

#include "money.h"

Money::Money()
{
  pounds = 1;
  shillings = 1;
  pence = 1;
}

Money::Money(int inputPence)
{
  pounds = inputPence / (12 * 20);  // total number of pounds that can be made with inputPence
  shillings = (inputPence % (12 * 20)) / 12;  // number of shillings that can be made with remaining pence
  pence = (inputPence % (12 * 20)) % 12;  // remaining pence
}

Money Money::operator+(Money toAdd)
{
  int totalPence = (pence + 12*shillings + 12*20*pounds) + (toAdd.pence + 12*toAdd.shillings + 12*20*toAdd.pounds);
  Money sum = Money(totalPence);
  return sum;
}

bool Money::operator>(Money toCompare)
{
  if((pence + 12*shillings + 12*20*pounds) > (toCompare.pence + 12*toCompare.shillings + 12*20*toCompare.pounds))
    return true;
  else
    return false;
}

Money Money::operator++()
{
  int totalPence = pence + 12*shillings + 12*20*pounds; // total pence inputted
  Money temp(totalPence+1); // temporary Money object created by adding 1 penny to totalPence
  pence = temp.pence; // assign temorary pence value to pence in inputted Money object
  shillings = temp.shillings; // shillings
  pounds = temp.pounds; // pounds
  return temp;
}

Money Money::addPence(int toAdd)
{
  int totalPence = (pence + 12*shillings + 12*20*pounds) + toAdd;
  Money sum = Money(totalPence);
  return sum;
}

void Money::printMoney()
{
  cout << "This object has " << pounds << " pounds, " << shillings << " shillings and " << pence << " pence.\n";
}
