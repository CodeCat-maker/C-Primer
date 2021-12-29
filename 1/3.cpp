#include <iostream>
struct inflatbale
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatbale guest{
        "Glorious Gloria",
        1.88,
        29.99};
    inflatbale pal{
        "Audancious Arthur",
        3.12,
        32.99};
    cout << "Expand your guest list with" << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    return 0;
}