//Zhihao Jin
//find_out_the_perfect_ numbers_without_formula.
#include <iostream>
using namespace std;
int main()
{
    unsigned long int sum = 0;
    for (unsigned long i = 1; i < 23109231028; i++)
    {
      for (unsigned long g = 1; g <= (i / 2); g++)
        {
            if (i % g == 0)
            {
              sum = sum + g;
            }
        }
        if (i == sum)
        {
            cout << i << endl;
            sum = 0;
        }
        else
        {
            sum = 0;
        }
    }
}
