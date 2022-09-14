// Your Name Here
// A program to compute weight in grams to ounces for two values.

#include <iostream>

using namespace std;

int main(){

  cout << "This program converts weights in grams to ounces." << endl;

  double weight_in_grams;
  cout << "Please enter the weight in grams: ";
  cin >> weight_in_grams;

  double weight_in_ounces = weight_in_grams / 454 * 16;
  cout << "That is equal to" << weight_in_ounces << " ounces." << endl;

   cout << "Please enter the second weight in grams: ";
  cin >> weight_in_grams;

  weight_in_ounces = weight_in_grams / 454 * 16;
  cout << "That is equal to" << weight_in_ounces << " ounces" << endl;

  return 0;
}
