// proxies.cpp — part of nitro-code-tool.

#include "nitrocodetool/proxies.h"

#include <cstdio>

namespace nitrocodetool {

Proxies::Proxies(const std::string& config_path)
    : config_path_(config_path) {}

void Proxies::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Proxies::run() {
    if (verbose_) std::fprintf(stderr, "[nitro-code-tool] proxies: run\n");
    // core logic lives here
    return true;
}

}  // namespace nitrocodetool
