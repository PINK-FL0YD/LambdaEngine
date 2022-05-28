//System Header
#include <iostream>

//LambdaEngine Header
#include "Interface/BaseApplication.hpp"

using namespace LambdaEngine;

namespace LambdaEngine
{
    extern IApplication* g_AppPtr;
}


int main(int argc, char** argv)
{
    if(g_AppPtr->Initialize() == false)
    {
        return -1;
    }

    while (!g_AppPtr->IsQuit())
    {
        g_AppPtr->Tick();
    }

    g_AppPtr->Finalize();

    return 0;
}
