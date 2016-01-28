#include <stdio.h>

#include "PerfChecker.h"



int main()
{
    PerfChecker pc;
    pc.Start();

    Sleep(100);
    pc.Check();
    
    Sleep(100);
    pc.Check();

    Sleep(100);
    pc.Check();

    Sleep(100);
    pc.Check();
    pc.Check();
    pc.Check();

    pc.End();
    std::vector<double> st;
    pc.GetPerformTime(st);

    return 0;
}