#include <iostream>
#include "mytime1.h"

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

    total = coding + fixing;
    cout << "coding + fixing = ";
    total.Show();

    return 0;
}
