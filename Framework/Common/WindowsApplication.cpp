#include "Interface/BaseApplication.hpp"

namespace LambdaEngine
{
    BaseApplication g_App;
    IApplication* g_AppPtr = &g_App;
}
