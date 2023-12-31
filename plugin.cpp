#include <Dragon.h>
#include <logger.h>

namespace MyPlugin {
    SKSEPluginLoad(const SKSE::LoadInterface* skse) {
        SKSE::Init(skse);
        SetupLog();

        // Once all plugins and mods are loaded, then the ~ console is ready and
        // can be printed to
        SKSE::GetMessagingInterface()->RegisterListener(
            [](SKSE::MessagingInterface::Message* message) {
                if (message->type == SKSE::MessagingInterface::kDataLoaded)
                    Dragon("Akatosh").PrintName();
            });

        return true;
    }
}