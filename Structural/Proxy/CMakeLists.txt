cmake_minimum_required(VERSION 3.10)

project(proxy VERSION 1.0.0 LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# основная программа
add_executable(proxy map.cpp)

enable_testing()

add_executable(test_proxy tests/test_proxy.cpp)

add_test(NAME test_proxy COMMAND test_proxy)


install(TARGETS proxy DESTINATION bin)

# --- CPack (deb пакет) ---
set(CPACK_GENERATOR "DEB")

set(CPACK_PACKAGE_NAME "proxy")
set(CPACK_PACKAGE_VERSION "${PROJECT_VERSION}")
set(CPACK_PACKAGE_CONTACT "student")

include(CPack)
