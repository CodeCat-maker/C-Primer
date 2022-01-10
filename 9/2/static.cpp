#include <iostream>
using namespace std;

const int ARRSIZE = 10;
void strcount(char *);

int main()
{
    char input[ARRSIZE];
    char next;

    puts("Enter a line:");
    cin.get(input, ARRSIZE);
    while (cin)
    {
        cin.get(next);
        while (next != '\n')
            cin.get(next);
        strcount(input);
        puts("Enter next lines (empty is quit) ");
        cin.get(input, ARRSIZE);
    }
    return 0;
}
void strcount(char *str)
{
    static int total = 0;
    int count = 0;
    while (*str++)
        count++;
    total += count;
    cout << "count = " << count << endl;
    cout << "total = " << total << endl;
}