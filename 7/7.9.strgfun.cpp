#include <iostream>
unsigned int c_in_str(const char *, char);

int main()
{
    using namespace std;
    char mmm[15] = "minimum";

    char wail[20] = "ululate";

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');

    cout << ms << " " << mmm << endl;
    cout << us << " " << wail << endl;

    return 0
}
unsigned int c_in_str(const char *str, char ch)
{
    unsigned int count = 0;

    while (*str)
    {
        if (*str == ch)
            count++;
        str++;
    }
    return count;
}