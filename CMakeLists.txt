cmake_minimum_required(VERSION 3.26)
project(server_client)

#set(CMAKE_PREFIX_PATH "/usr/local/opt/soci")
set(CMAKE_PREFIX_PATH "/Users/lizakartuzova/libCPP/soci")
find_package(SOCI REQUIRED)

set(CMAKE_CXX_STANDARD 17)

add_executable(server-client main.cpp
        src/core/entities/Product/Product.h
        src/core/entities/User/User.h
        src/core/entities/Сategory/Сategory.h
        src/core/entities/Payment/Payment.h
        src/core/repositories/User/UserRepository.h
        src/core/repositories/Product/ProductRepository.h
        src/core/repositories/dto.h
        src/core/repositories/Category/CategoryRepository.h
        src/core/repositories/Payment/Payment.h
        src/infrastructure/db/entities/User/User.h)

#include_directories(${SOCI_INCLUDE_DIRS})
#include_directories("/usr/local/opt/soci/include/soci")
include_directories("/Users/lizakartuzova/libCPP/soci/include/soci")

target_link_libraries(server-client ${SOCI_LIBRARY})
#target_link_libraries(server-client soci_core)

#target_link_libraries(server-client "/usr/local/opt/soci/lib")
