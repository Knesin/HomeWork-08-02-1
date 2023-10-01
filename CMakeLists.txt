cmake_minimum_required(VERSION 3.14)

project(HomeWork-08-02-1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Network Sql)

add_executable(HomeWork-08-02-1
  main.cpp
)
target_link_libraries(HomeWork-08-02-1   Qt6::Core
                                         Qt6::Network
                                         Qt6::Sql)

include(GNUInstallDirs)
install(TARGETS HomeWork-08-02-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
