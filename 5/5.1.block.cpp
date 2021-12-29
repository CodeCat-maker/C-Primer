#include <iostream>

int main()
{
    using namespace std;
    int x = 20;
    {
        int y = 20;
        cout << x << " " << y << endl;
    }
    //cout << x << " " << y << endl;
    return 0;
}