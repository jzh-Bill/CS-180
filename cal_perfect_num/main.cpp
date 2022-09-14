//Zhihao Jin
//find_perfect_numbers_with_formula.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  long A_part = 1;
  long B_part = 2;
  long P = 2;
  long result;
  long i = 1;
  long sum = 0;
  for (long P = 2; P < 18; P++)
  {
    A_part = 2 * A_part;
    B_part = pow (2 , P) - 1;
    result = A_part * B_part;
    for (i = 1; i < result; i++)
    {
      if (result % i == 0)
      {
        sum += i;
      }
    }
      if (sum == result)
        {
          cout << result << endl;
          sum = 0;
          result = 0;
        }
        else
        {
          sum = 0;
          result = 0;
        }
    }
}
