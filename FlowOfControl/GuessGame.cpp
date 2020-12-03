#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
  int answer = 9;
  bool play = true;
  while (play)
  {
    int userAnswer;
    cout << "Enter your Answer " << endl;
    cin >> userAnswer;
    if (userAnswer == answer)
    {
      cout << "Correct Answer" << endl;
      play = false;
    }
    if (userAnswer > answer)
    {
      cout << "lower your guess" << endl;
    }
    else
    {
      cout << "increase your guess" << endl;
    }
  }
}