//Zhihao Jin 22 Jan. 2019
#include <iostream>
using namespace std;

int main()
{
    double regular_wages,
    base_pay_rate = 18.25,
    regular_hours = 40.0,
    overtime_wages ,
    overtime_pay_rate = 27.78,
    overtime_hours = 10 ,
    total_wages ;

  regular_wages = base_pay_rate * regular_hours;

  overtime_wages = overtime_pay_rate * overtime_hours;

  total_wages = regular_wages + overtime_wages;

  cout << "Wages for this week are $" << total_wages << endl;
  return 0;
}
