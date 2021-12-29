#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;
int main()
{
    using namespace std;
    char filename[SIZE];
    cout << "Enter:";
    cin.getline(filename, SIZE);
    ifstream inFile;
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Wrong" << endl;
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0; 
    int count = 0;

    inFile >> value;
    while (inFile.good())
    {
        ++count;
        sum += value;
        inFile >> value;
    }
    if (inFile.eof())
        cout << "End of file end \n";
    else if (inFile.fail())
        cout << "Input terminated by data mismatch\n";
    else
        cout << "Input for unknown reason\n";
    if (count == 0)
    {
        cout << "No data processed.\n";
    }
    else
    {
        cout << "Items read:" << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    inFile.close();
    return 0;
}