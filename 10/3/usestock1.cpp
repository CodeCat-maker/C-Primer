#include "stock10.h"

int main()
{
    Stock cat("NanoSmart", 20, 12.5);
    cat.show();
    cat.buy(15, 18.125);
    cat.show();
    cat.sell(400, 20.00);
    cat.show();
    cat.buy(30000, 40.125);
    cat.show();
    cat.sell(30000, 0.125);
    cat.show();

    Stock dog = Stock("NanoSmart", 20, 12.5);
    return 0;
}