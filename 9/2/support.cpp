#include "support.h"

using namespace std;

void update(double dt)
{
    warming += dt;
    cout << "Updating global warming to " << warming << " degrees\n";
}
void local()
{
    double warming = 0.3;
    cout << "Local warming = " << warming << " degress.\n";
    cout << "But Global warming = " << ::warming << " degrees.\n";
}