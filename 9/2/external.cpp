#include "support.h"
using namespace std;
double warming = 0.3;
int main()
{
    update(0.1);
    local();
    cout << "Global warming = " << warming << endl;
    return 0;
}