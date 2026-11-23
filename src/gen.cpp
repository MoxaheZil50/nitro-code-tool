// gen.cpp — part of nitro-code-tool.

#include "nitrocodetool/gen.h"

#include <cstdio>

namespace nitrocodetool {

Gen::Gen(const std::string& config_path)
    : config_path_(config_path) {}

void Gen::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Gen::run() {
    if (verbose_) std::fprintf(stderr, "[nitro-code-tool] gen: run\n");
    // core logic lives here
    return true;
}

}  // namespace nitrocodetool
