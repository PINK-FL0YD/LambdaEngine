#pragma once
#include "Interface.hpp"

namespace LambdaEngine
{
    class IRuntimeModule
    {
    public:
        IRuntimeModule() = default;
        virtual ~IRuntimeModule(){};

        virtual bool Initialize() = 0;
        virtual void Finalize() = 0;

        virtual void Tick() = 0;
    };
}
