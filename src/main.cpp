#include <iostream>

#include <Logger/logger_util.h>

#include <Cfs/Core.hpp>

using namespace std;

int main(int argc, char** argv){
    log("INFO: Starting application");
    
    Core c("core");

    return 0;
}