#include "config.h"
#include <iostream>

std::string versionManager() {
    std::string res = "Version " + std::to_string(audi_cmake_app_VERSION_MAJOR) + "." + std::to_string(audi_cmake_app_VERSION_MINOR);
    return res;
}
int main() {
    std::string resV = versionManager();
    return 0;
}