# Learning C++ through cFS


## Running the code

1. Create the `build` directory(inside the project directory)
`mkdir cfs/build`
2. `cd` into `build` directory
`cd cfs/build`
3. Generate the build files
`cmake ..`
4. Compile the sources 
`make`
5. Run the program
`./cfs`

Expected Output:
```
INFO: Starting Application
INFO: Creating Core: core
INFO: Creating Submodule: AntennaDeployer
Starting submodule: AntennaDeployer
```


## How does C++ work


## What is CMake?
CMake is a compiling utility that simplifies the building process for C/C++ projects.

The conventional compiler for C++ is called `g++`. To compile a single C++ file with `g++` run the following:

`g++ <file.cpp> -o <file>`

To execute the program:

`./<file>`

Unfortunately, this method of compiling does not easily support including other external dependencies, this is where CMake comes in.

First we create a `CMakeLists.txt` file in the root directory of the project.

Second, we create a `build` directory, providing `cmake` a place to store the generated build files

Thirdly, we generate the build files using `cmake ..`

* `cmake` will read the `CMakeLists.txt` file in the root directory and generate the build files accordingly

Finally, using the generated build files, we use `make` to ultimately compile and generate the program(executable) file

Without CMake, the `g++` command will require 10+ flags to manually include the external dependencies.
It also does not scale well when adding more dependencies

Read more about CMake here:
https://medium.com/heuristics/c-application-development-part-1-project-structure-454b00f9eddc

Example CMake project here:
https://github.com/AakashMallik/sample_cmake
