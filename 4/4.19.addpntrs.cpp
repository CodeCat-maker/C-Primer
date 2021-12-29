#include <iostream>
using namespace std;
int main()
{
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short statck[3] = {3, 2, 1};

    double *pw = wages;
    short *ps = &statck[0];
    cout << *ps << endl
         << *pw << endl;
    pw += 1;
    cout << *pw << endl;

    cout << sizeof(wages) << endl
         << sizeof(pw) << endl;
    return 0;
}