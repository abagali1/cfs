cmake_minimum_required( VERSION 3.0 )

project( cfs )

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories( ./include ./src ./libs/Logger/include ./src/modules ./include/modules)

add_executable( cfs ./src/main.cpp  ./src/core/core.cpp ./src/modules/AntennaDeployer.cpp)

add_subdirectory( ./libs/Logger )
target_link_libraries( cfs logger )
