//Zhihao Jin
//calculate_how_many_times_do_heads_equal_tails
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  const int HEAD = 0;
  unsigned trials;
  unsigned coins;
  int head = 0;
  int tail = 0;
  int equals = 0;
  double average;
  unsigned seed = time( 0 );
  srand( seed );
  cout << "How many trials do you want?" << endl;
  cin >> trials;
  cout << "How many times do you want the coin to be tossed?" << endl;
  cin >> coins;

  for( unsigned i = 1; i <= trials; i++ )
  {
    for( unsigned g = 1; g <= coins; g++ )
    {
      if( rand() % 2 == HEAD )
      {
        head++;
      }
      else
      {
        tail++;
      }

      if( head == tail )
      {
        equals++;
      }
    }
  }
  average = static_cast<double>( equals ) / trials;
  cout << "There are " << equals << " times that heads equal tails" << endl;
  cout << "The average number where " << coins << " times tossed coin over " <<
  trials << " trials is " << average << " times";
}

