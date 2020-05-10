cmake_minimum_required(VERSION 3.16)
project(gstreamer_01)

set(CMAKE_CXX_STANDARD 14)
find_package(PkgConfig)

pkg_check_modules(GSTREAMER REQUIRED gstreamer-1.0)

include_directories(
        ${GLIB_INCLUDE_DIRS}
        ${GSTREAMER_INCLUDE_DIRS}
)

link_directories(
        ${GLIB_LIBRARY_DIRS}
        ${GSTREAMER_LIBRARY_DIRS}
)

add_executable(gstreamer_01 main.cpp)
target_link_libraries(gstreamer_01 ${GSTREAMER_LIBRARIES})