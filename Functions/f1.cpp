#include <iostream>
#include <vector>

using std::cout;
using std::endl;
double add(double x, double y)
{
  return x + y;
}
double multiply(double num1, double num2, double num3)
{
}
int main()
{
  int total = add(3, 4);
  cout << "3+4 is" << total << endl;
  double another = add(1.3, 3.4);
  cout << another << endl;
}
