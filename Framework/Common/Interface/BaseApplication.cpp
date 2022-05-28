#include "BaseApplication.hpp"

namespace LambdaEngine
{

    bool BaseApplication::Initialize()
    {
        m_bQuit = false;

        return true;
    }

    void BaseApplication::Finalize()
    {

    }

    void BaseApplication::Tick()
    {

    }

    bool BaseApplication::IsQuit()
    {
        return m_bQuit;
    }
}
