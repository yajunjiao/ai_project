#include "Modules/ModuleManager.h"

class FRuntimeLineDrawModule : public IModuleInterface
{
public:
    virtual void StartupModule() override {}
    virtual void ShutdownModule() override {}
};

IMPLEMENT_MODULE(FRuntimeLineDrawModule, RuntimeLineDraw)