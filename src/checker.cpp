// checker.cpp — part of nitro-code-tool.

#include "nitrocodetool/checker.h"

#include <cstdio>

namespace nitrocodetool {

Checker::Checker(const std::string& config_path)
    : config_path_(config_path) {}

void Checker::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Checker::run() {
    if (verbose_) std::fprintf(stderr, "[nitro-code-tool] checker: run\n");
    // core logic lives here
    return true;
}

}  // namespace nitrocodetool
