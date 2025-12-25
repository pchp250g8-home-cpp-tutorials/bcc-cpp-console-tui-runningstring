#include <iostream>
#include <tchar.h>
#include <chrono>
#include <string>
#include <thread>
#include "constream.hpp"

int _tmain(int argc, _TCHAR* argv[])
{
    using namespace std;
    using namespace conio;
    using namespace std::chrono_literals;
    string strSpaces(80,32);
    string strLine("Hello World!!! Running String!!! Press Any Key To Exit!!!");
    strLine = strSpaces + strLine + strSpaces;
    auto nCounter = 0;
    auto nStrLen = strLine.length() - 80;
    clrscr(cout);
    do
    {
        strSpaces = strLine.substr(nCounter, 80);
        cout << setcrsrtype(0) << setxy(10,10) << strSpaces;
        std::this_thread::sleep_for(140ms);
        nCounter++;
        if (nCounter >= nStrLen) nCounter = 0;
    }while(!kbhit());
}
