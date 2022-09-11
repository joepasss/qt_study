cmake_minimum_required(VERSION 3.23)
project(variables_constants)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/Users/mac/Qt/6.3.1/macos/lib/cmake")

find_package(Qt6 COMPONENTS
        Core
        REQUIRED)

add_executable(variables_constants main.cpp)
target_link_libraries(variables_constants
        Qt::Core
        )

