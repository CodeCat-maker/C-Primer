#include "conio.h"
#include <iostream>
using namespace std;
int main()
{
    int ch;
    while ((ch = getch()) != 0x1B)
    {
        switch (ch)
        {
        case 0xE0:
            switch (ch = getch())
            {
            case 72:
                cout << "up";
                break; //上
            case 80:
                cout << "down";
                break; //下
            case 75:
                cout << "left";
                break; //左
            case 77:
                cout << "right";
                break; //右
            default:
                break;
            }
            break;
        }
    }
}