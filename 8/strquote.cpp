#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string input;
    string copy;
    string result;

    getline(cin, input);
    copy = input;

    cout << "Your string as entered: " << input << endl;
    result = version1(input, "****");
    cout << "Your string exhanced: " << result << endl;
    cout << "Your original string: " << input << endl;

    result = version1(input, "####");
    cout << "Your string exhanced: " << result << endl;
    cout << "Your original string: " << input << endl;

    result = version1(input, "$$$$");
    cout << "Your string exhanced: " << result << endl;
    cout << "Your original string: " << input << endl;

    return 0;
}

string version1(const string &s1, const string &s2)
{
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}

const string &version2(string &s1, const string &s2)
{
    s1 = s2 + s1 + s2;
    return s1;
}

const string &version3(string &s1, const string &s2)
{
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}