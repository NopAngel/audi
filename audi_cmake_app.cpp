#include <iostream>
#include "config.h"

int main(int argc, char **argv) {
	std::cout << "Hello World" << std::endl;
	std::cout << "Version " << audi_cmake_app_VERSION_MAJOR << "." << audi_cmake_app_VERSION_MINOR << std::endl;
	return 0;
}
