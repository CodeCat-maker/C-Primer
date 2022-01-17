#include <iostream>
#include "mytime0.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Time palnning;
    Time coding(2, 40);
    Time fixing(5, 55);

    Time total;

    cout << "planning time = ";
    palnning.Show();
    puts("");

    cout << "conding time = ";
    coding.Show();
    puts("");

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding.Sum(fixing);
    cout << "coding.sum(fixing) = ";
    total.Show();

    return 0;
}
