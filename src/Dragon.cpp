#include <Dragon.h>

namespace MyPlugin {

    void Dragon::PrintName() {
        auto console = RE::ConsoleLog::GetSingleton();
        if (console) console->Print(this->_name.c_str());

        spdlog::info("Dragon Name: {}", this->_name.c_str());
    }
}