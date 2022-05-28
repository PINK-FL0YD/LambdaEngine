#pragma once
#include "IApplication.hpp"

namespace LambdaEngine
{
    class BaseApplication : public IApplication
    {
    public:
        virtual bool Initialize();
        virtual void Finalize();

        virtual void Tick();
        virtual bool IsQuit();

    protected:
        bool m_bQuit;
    };

}
