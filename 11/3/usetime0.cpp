#include <iostream>
#include "mytime0.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << "Aida and tosca:\n";
    cout << aida << endl
         << tosca;

    return 0;
}
