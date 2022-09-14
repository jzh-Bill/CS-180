//calculate_quadratic_expression
//Zhihao Jin
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double x1;
    double x2;

    cout <<  "Please enter the coefficient of a , b and c ";
    cin >> a >> b >> c;

    double discriminant = b*b - 4*a*c;

    if( a == 0)
    {
      cout << "The coefficients you have chosen for a is" << setw(5) << a << endl;
      cout << "The coefficients you have chosen for b is" << setw(5) << b << endl;
      cout << "The coefficients you have chosen for c is" << setw(5) << c << endl;
      cout << "The expression is invalid, because a can't be 0 " << endl;
    }
    else if ( discriminant > 0)
    {
      x1 = (-b + pow ( discriminant, 0.5)) / 2 * a;
      x2 = (-b - pow ( discriminant, 0.5)) / 2 * a;

      cout << "The coefficients you have chosen for a is" << setw(5) << a << endl;
      cout << "The coefficients you have chosen for b is" << setw(5) << b << endl;
      cout << "The coefficients you have chosen for c is" << setw(5) << c << endl;
      cout << "Because the discriminant is greater than 0. So, there are two complex roots " << endl;
      cout << "The first root is " << setw(5) << x1 << endl;
      cout << "The second root is " << setw(5) << x2 << endl;
    }
    else if ( discriminant == 0 )
    {
      x1 = -b / 2 * a;
      cout << "There is only one root" << x1;
    }
    else if ( discriminant < 0 )
    {
      cout << "There is no real root";
    }
}
