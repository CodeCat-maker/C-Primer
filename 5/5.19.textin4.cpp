#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);
    while (cin.fail() == false)
    {
        cout << ch;
        cin.get(ch);
    }
    return 0;
}