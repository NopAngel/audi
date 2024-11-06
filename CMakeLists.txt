cmake_minimum_required(VERSION 3.10)

# Set some basic project attributes
project (audi_cmake_app
	VERSION 0.1
	DESCRIPTION "Audi, the best platform for playing videos and sounds!")

# This project will output an executable file
add_executable(${PROJECT_NAME} audi_cmake_app.cpp)

# Create a simple configuration header
configure_file(config.h.in config.h)

# Include the configuration header in the build
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}")
