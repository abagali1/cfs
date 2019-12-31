#pragma once

#include <iostream>
#include <iterator>
#include <map>
#include <unistd.h>

#include <Cfs/Submodule.hpp>
#include <Cfs/modules/AntennaDeployer.hpp>

enum Mode{
    NORMAL,
    LOW_POWER
};

class Core{
    private:
        string name;
        Mode state;
        map<string, Submodule*> submodules;

    public:
        Core(string name);
};


