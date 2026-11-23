// main.cpp — entry point. Wires config and subsystems together.

#include "nitrocodetool/settings.h"
#include "nitrocodetool/gen.h"
#include "nitrocodetool/checker.h"
#include "nitrocodetool/proxies.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    nitrocodetool::Settings settings = nitrocodetool::Settings::load_default();
    nitrocodetool::Gen gen(settings.store_path);
    nitrocodetool::Checker checker(settings.store_path);
    nitrocodetool::Proxies proxies(settings.store_path);
    std::fprintf(stderr, "[nitro-code-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
