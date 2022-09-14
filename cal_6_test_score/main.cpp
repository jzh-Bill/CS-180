#include <iostream>
#include <iomanip>
// Zhihao_Jin
// calculate_6_student_average_score
using namespace std;

int main()
{
    double student_1_a;
    double student_1_b;
    double student_1_c;
    double student_2_a;
    double student_2_b;
    double student_2_c;
    double student_3_a;
    double student_3_b;
    double student_3_c;
    double student_4_a;
    double student_4_b;
    double student_4_c;
    double student_5_a;
    double student_5_b;
    double student_5_c;
    double student_6_a;
    double student_6_b;
    double student_6_c;
    double average_1;
    double average_2;
  // declare the variables
  cout << "student data, please: ";
  cin >> student_1_a >> student_1_b;
  student_1_c = student_1_a + student_1_b;
  cout << "The total for the two tests is " << student_1_c << endl;
  // student_1 finished
  cout << "student data, please: ";
  cin >> student_2_a >> student_2_b;
  student_2_c = student_2_a + student_2_b;
  cout << "The total for the two tests is " << student_2_c << endl;
  // student 2 finished
    cout << "student data, please: ";
  cin >> student_3_a >> student_3_b;
  student_3_c = student_3_a + student_3_b;
  cout << "The total for the two tests is " << student_3_c << endl;
  // student 3 finished
    cout << "student data, please: ";
  cin >> student_4_a >> student_4_b;
  student_4_c = student_4_a + student_4_b;
  cout << "The total for the two tests is " << student_4_c << endl;
  // student 4 finished
    cout << "student data, please: ";
  cin >> student_5_a >> student_5_b;
  student_5_c = student_5_a + student_5_b;
  cout << "The total for the two tests is " << student_5_c << endl;
  // student 5 finished
    cout << "student data, please: ";
  cin >> student_6_a >> student_6_b;
  student_6_c = student_6_a + student_6_b;
  cout << "The total for the two tests is " << student_6_c << endl;
  //student 6 finished
average_1 = (student_1_a + student_2_a + student_3_a + student_4_a +
    student_5_a + student_6_a) / 6.0 ;
average_2 = (student_1_b + student_2_b + student_3_b + student_4_b +
    student_5_b + student_6_b) / 6.0 ;
cout << "The average for test 1 is " << setprecision(5) << average_1 << endl
    << "The average for test 2 is " << setprecision(5) << average_2;
}
