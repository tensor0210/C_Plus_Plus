#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
  int firstNumber, secondNumber;
  bool keepGoing = true;
  while (keepGoing)
  {

    cout << "Enter a Number:" << endl;
    cin >> firstNumber;
    cin >> secondNumber;
    cout << "You entered" << firstNumber << " secondNumber" << secondNumber;
    if (firstNumber > secondNumber)
    {
      cout << "First Number is Greater";
    }
    else
    {
      cout << "Second Number is Greater" << endl;
    }
    int answer;
    cout << "Enter 0 to exit" << endl;
    cin >> answer;
    if (answer == 0)
    {
      keepGoing = false;
    }
  }
}