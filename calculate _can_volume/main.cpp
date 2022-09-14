#include <iostream>
//Zhihao Jin 29 Jan. 2019
using namespace std;

int main()
{
    double v, r, h;
    cout<< "Enter the value of radius ";

    cin>> r ;

    cout<<"Enter the value of height ";

    cin>> h;

    v = 3.1415972 * r * r * h;

    cout<<"The volume is  "<<v;

    return 0;
}
