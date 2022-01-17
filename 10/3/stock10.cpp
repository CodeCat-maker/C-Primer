#include "stock10.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
Stock::Stock()
{
    cout << "Default constructor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    set_tot();
}
Stock::Stock(const string &co, long n, double pr)
{
    cout << "Consturctor using " << co << " called\n";
    company = co;
    if (n < 0)
    {
        cout << "Number of shares can't be negative;"
             << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}
void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        cout << "Number of shares purchased can't be negative ."
             << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}
Stock::~Stock()
{
    cout << "Bye," << company << endl;
}
void Stock::sell(long num, double price)
{
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have ! "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}
void Stock::update(double price)
{
    share_val = price;
    set_tot();
}
void Stock::show()
{
    using std::ios_base;
    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    cout << "Company " << company << endl
         << "shares " << shares << endl
         << "share price " << share_val << endl
         << "total worth " << total_val << endl;
    puts("");
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}