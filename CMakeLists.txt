cmake_minimum_required( VERSION 3.0 ) # set min CMAKE version to 3.0

project( cfs ) # project name

set(CMAKE_CXX_STANDARD 11) # misc stuff
set(CMAKE_CXX_STANDARD_REQUIRED True)  # misc stuff

include_directories( ./include ./src ./libs/Logger/include ./include/modules) # ALL directories than contain .h/.hpp files

add_executable( cfs ./src/main.cpp  ./src/core/core.cpp ./src/modules/AntennaDeployer.cpp) # ALL .cpp files, first arg is output file, second arg is ALWAYS main.cpp

add_subdirectory( ./libs/Logger ) # external dependency
target_link_libraries( cfs logger ) # tells cmake that the specified dependency library should be included in executable output file
