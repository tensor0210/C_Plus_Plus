#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
  int firstNumber, secondNumber;
  cout << "Enter a Number:";
  cin >> firstNumber;
  cin >> secondNumber;
  cout << "You entered" << firstNumber << " secondNumber" << secondNumber;
  if (firstNumber > secondNumber)
  {
    cout << "First Number is Greater";
  }
  if (secondNumber > firstNumber)
  {
    cout << "Second Number is Greater";
  }
}