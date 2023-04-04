cmake_minimum_required(VERSION 3.12)
project(factorial_test)
include(CTest)
# Add Google Test as a dependency
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.tar.gz
)
FetchContent_MakeAvailable(googletest)

# Enable testing
enable_testing()

# Add the factorial library
add_library(factorial factorial.cpp)
# Add the test executable
add_executable(test_factorial test_factorial.cpp)
# Link the test executable with the factorial library and Google Test
target_link_libraries(test_factorial factorial gtest_main)
# Register the test executable with CTest
add_test(NAME test_factorial COMMAND test_factorial)

set(CTEST_PROJECT_NAME "MyProject")
set(CTEST_NIGHTLY_START_TIME "01:00:00 UTC")
set(CTEST_DROP_METHOD "http")
set(CTEST_DROP_SITE "my.cdash.org")
set(CTEST_DROP_LOCATION "/submit.php?project=MyProject")
set(CTEST_SITE "MySite")
set(CTEST_BUILD_NAME "Linux-Debug")
set(CTEST_BUILD_COMMAND "cmake --build .")
set(CTEST_CMAKE_GENERATOR "Unix Makefiles")

