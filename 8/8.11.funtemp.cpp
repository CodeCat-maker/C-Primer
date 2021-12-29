#include <iostream>

template <typename T>
void Swap(T &a, T &b);

int main()
{
    using namespace std;
    int a = 10, b = 20;
    cout << a << " " << b << endl;
    Swap(a, b);
    cout << a << " " << b << endl;
    puts("=====");
    double c = 30, d = 40;
    cout << c << " " << d << endl;
    Swap(c, d);
    cout << c << " " << d << endl;
    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}