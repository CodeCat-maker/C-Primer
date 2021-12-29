#include <iostream>
extern int tom;
static int dick = 10;
int harry = 200;

void remote_access()
{
    using namespace std;
    cout << "remote_address\n";
    cout << &tom << "=tom " << &dick << "=dick\n";
    cout << &harry << "= harry\n";
}