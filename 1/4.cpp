#include <iostream>
using namespace std;
enum bits
{
    one = 1,
    two = 2,
    four = 4,
    eigth = 8
};
int main()
{
    cout << bits(one);
    return 0;
}