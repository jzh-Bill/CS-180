
//Zhihao Jin
//calculate_the_probability_of_head
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  const unsigned HEAD = 0;
  const unsigned TAIL = 1;
  unsigned int seed = time(0);
  srand(seed);
  long signed limit;
  cout << "How many times do you want the coin to be tossed?" << endl;
  cin >> limit;
  unsigned  head = 0;
  unsigned  tail = 0;
  for(unsigned i = 0; i < limit; i++)
  {
   if(rand() % 2 == HEAD)
   {
     head++;
   }
   else
   {
     tail++;
   }
 }
  double probability = static_cast<double>(head) / limit;
  cout << "head is " << head << " times" << endl;
  cout << "tail is " << tail << " times" << endl;
  cout << "The probability is " << probability;
 }
