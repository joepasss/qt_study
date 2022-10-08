cmake_minimum_required(VERSION 3.23)
project(classes)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_PREFIX_PATH "/Users/mac/Qt/6.4.0/macos/lib/cmake")

find_package(Qt6 REQUIRED COMPONENTS Core)

add_executable(${PROJECT_NAME} main.cpp animal.cpp animal.h laptop.cpp laptop.h Mammal.cpp Mammal.h)

target_link_libraries(${PROJECT_NAME}
        Qt::Core
        )

include_directories (${CMAKE_BINARY_DIR})

