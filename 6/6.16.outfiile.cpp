#include <iostream>
#include <fstream>
int main()
{
    using namespace std;
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;
    outFile.open("outfile.txt");

    cout << "Enter the make and model of automobile:";
    cin.getline(automobile, 50);
    cout << "Enter the model year:";
    cin >> year;
    cin >> a_price;
    d_price = 0.913 * a_price;
    cin >> fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << automobile << endl;
    cout << year << endl;
    cout << a_price << endl;
    cout << d_price << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);

    outFile << automobile << endl;
    outFile << year << endl;
    outFile << a_price << endl;
    outFile << d_price << endl;
    
 
    return 0;
}