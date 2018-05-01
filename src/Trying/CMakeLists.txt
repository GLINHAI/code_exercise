cmake_minimum_required(VERSION 2.8.3)
project(Trying)

include_directories(include)

add_library(mylib 
  src/Class.cpp
# src/****.cpp
# src/****.cpp
)
#execute Class.cpp to form a library called "mylib"

add_executable(${PROJECT_NAME}_main 
  src/main.cpp
  src/Class.cpp
)
target_link_libraries(${PROJECT_NAME}_main mylib)
