cmake_minimum_required (VERSION 3.16)
project (ST-1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O3 -g")
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

enable_testing()

# Library
include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(${PROJECT_NAME} SHARED src/alg.cpp)

# Tests
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        main
)
FetchContent_MakeAvailable(googletest)

add_executable(${PROJECT_NAME}.test test/tests.cpp)
target_link_libraries(${PROJECT_NAME}.test ${PROJECT_NAME} gtest)
