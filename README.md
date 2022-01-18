# cURL-CMake
**C**ancer**Make**
***
## Partial
```cmake
# Links CURL; "l" for "library", then follows the library name.
set(CURL_LIBRARY "-lcurl")
# Find CURL
find_package(CURL REQUIRED)
# Add your executable
add_executable(${PROJECT_NAME} main.cpp)
# Link the CURL "include" directory
include_directories(${CURL_INCLUDE_DIR})
# Link the CURL libraries
target_link_libraries(${PROJECT_NAME} ${CURL_LIBRARIES})
```
## Full CMake
```cmake
cmake_minimum_required(VERSION 3.0)
project(CPPTest)

set(CMAKE_CXX_STANDARD 20)

# Links CURL; "l" for "library", then follows the library name.
set(CURL_LIBRARY "-lcurl")
# Find CURL
find_package(CURL REQUIRED)
# Add your executable
add_executable(${PROJECT_NAME} main.cpp)
# Link the CURL "include" directory
include_directories(${CURL_INCLUDE_DIR})
# Link the CURL libraries
target_link_libraries(${PROJECT_NAME} ${CURL_LIBRARIES})
```
